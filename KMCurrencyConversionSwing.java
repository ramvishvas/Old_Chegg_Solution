// your program file name should be "KMCurrencyConversionSwing.java"
import javax.swing.JOptionPane;
import java.text.DecimalFormat;

public class KMCurrencyConversionSwing
{
     public static void main(String[] args)
     {
         // declare and construct variables

         double dollars, pounds, euros, rubles;

         // Assigning Values
         pounds = 0.64;
         euros = 0.91;
         rubles = 61.73;
         DecimalFormat twoDigits = new DecimalFormat("####.00");

         //print prompts and get input
         System.out.println("\tCurrency Conversion:");

         dollars = Double.parseDouble(JOptionPane.showInputDialog(null, "Enter the dollar amount:"));

         // calculations

         pounds = pounds * dollars;
         euros = euros * dollars;
         rubles = rubles * dollars;

         // output
         JOptionPane.showMessageDialog(null, "YOUR DOLLAR AMOUNT OF " 
          + twoDigits.format(dollars) + "\n is equal to "
         + twoDigits.format(euros) + " euros,\n" + twoDigits.format(pounds) 
         + "pounds \n and " + twoDigits.format(rubles)+ "rubles." ,
         "Currency Convertor",JOptionPane.PLAIN_MESSAGE);

     System.exit(0);
     }

}