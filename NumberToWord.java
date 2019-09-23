//  any doubt? just ask
import java.util.Scanner;
public class NumberToWord
{
   private static final String[] units = { //array of units
      "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
      "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

   private static final String[] tens = { // array of tens
      "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

   public static String convertNumberToWords (int n) {
      if (n < 0) 
      {
         return "negative " + convertNumberToWords(-n); 
      }
      if (n < 20) 
      {
         return units[n];
      }

      if (n < 100) 
      {
         // subtract -2 to get proper index
         return tens[n/10 - 2] + ((n % 10 != 0) ? " "+ units[n % 10] : "") ;
      }

      if (n < 1000) 
      {
         return units[n / 100] + " hundred" + ((n % 100 != 0) ? " "+ convertNumberToWords(n % 100) : "");
      }

      if (n < 100000) 
      {
         return convertNumberToWords(n/1000) + " thousand" + ((n%10000 != 0) ? " "+ convertNumberToWords(n % 1000) : "");
      }
      // if the number is in yhe form of lac then get firs three digit
      // and consider the thousant of that
      
      if (n < 1000000) 
      {
         return convertNumberToWords(n/1000) + " thousand" + ((n%1000 != 0) ? " "+convertNumberToWords(n % 1000): "");
      }
      else
      {
         return convertNumberToWords(n/1000000) + " million" + ((n%1000000 != 0) ? " "+ convertNumberToWords(n % 1000000) : "");
      }
   }
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      System.out.print("Enter Number : ");
      int num = in.nextInt();
      System.out.println(convertNumberToWords(num));
   }
}