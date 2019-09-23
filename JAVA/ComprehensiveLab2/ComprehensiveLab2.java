import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;

import java.io.IOException;

public class ComprehensiveLab2 {
  // this is done by you............................................
  public static boolean Luhn(String creditCard) 
  {
    int sum = 0;
    int[] cardArray = new int[creditCard.length()];
    for (int i = 0; i < cardArray.length; i++) 
    {
      cardArray[i] = Integer.parseInt(creditCard.substring(i, i + 1));
    }

    for (int i = 0; i < cardArray.length; i = i + 2) 
    {

      int j = cardArray[i];
      j = j * 2;
      if (j > 9) 
      {
        j = j % 10 + 1;
      }

      cardArray[i] = j;
    }

    for (int i = 0; i < cardArray.length; i++) 
    {
      sum += cardArray[i];
    }

    if (sum % 10 == 0) 
    {
      return true;
    }
    else
    {
      return false;
    }
  }

//....................................................................................
  //Iterative version

  public static void checkCustomersIter(String[][] customersInfo) {
    try{
      BufferedWriter out = new BufferedWriter(new FileWriter("customersInfoOutput.txt"));
      String str;
      for (int i = 0; i < customersInfo.length ; i++ ) 
      {
        // check if card is invalid and add to file
        if (!Luhn(customersInfo[i][1])) 
        {
          str = customersInfo[i][0] +"\t"+customersInfo[i][1]+"\n";
          out.write(str); // write to file
        }
      }
      out.close();// close
    }

    catch(IOException e)
    {
      e.printStackTrace();
    }

  }
//.....................................................................................
  //Recursive version

  public static void checkCustomersRec(String[][] customersInfo) {

  }

  private static final String creditCardFile = "ccexamples.txt";

  private static final String customersFile = "ccandnamesExamples.txt";

  public static void main(String[] args) 
  {
    try (BufferedReader br = new BufferedReader(new FileReader(customersFile))) {
      // int lines = 6;
      // while (br.readLine() != null) lines++;
      String sCurrentLine;
      int lines = 6;
      String[][] customersInfo = new String[lines][2];
      int i = 0;

      while ((sCurrentLine = br.readLine()) != null) 
      {
        int index = sCurrentLine.lastIndexOf(" ");
        String name = sCurrentLine.substring(0, index);
        String number = sCurrentLine.substring(index+1, sCurrentLine.length());

        customersInfo[i][0] = name;
        customersInfo[i][1] = number;
        System.out.println(customersInfo[i][0]+"\t\t"+customersInfo[i][1]);
        ++i;
      }
      // for (i = 0; i < 6 ; i++ ) {
      //   System.out.println(customersInfo[i][0]+"\t\t"+customersInfo[i][1]);
      // }
      checkCustomersIter(customersInfo);
    }

    catch (IOException e) 
    {
      e.printStackTrace();
    }

    // try (BufferedReader br = new BufferedReader(new FileReader(creditCardFile))) {

    //   String sCurrentLine;
    //   System.out.println("Credit Card \t Validity");

    //   System.out.println("----------------------------");
    //   while ((sCurrentLine = br.readLine()) != null) 
    //   {
    //     // System.out.println(sCurrentLine);
    //     boolean validNum = Luhn(sCurrentLine);

    //     if (validNum) 
    //     {
    //         System.out.println(sCurrentLine + " Valid");
    //     }

    //     else 
    //     {
    //       System.out.println(sCurrentLine + " Invalid");
    //     }
    //   }
    // }

    // catch (IOException e) 
    // {
    //   e.printStackTrace();
    // }
  }
}