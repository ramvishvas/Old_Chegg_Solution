import java.io.*;
import java.util.Scanner;	
public class NumeralCount
{
	public static void main(String[] args) 
	{
		int[] count =  new int[10];
		if (args.length >= 1) 
		{
			String fileName = args[0];

			// This will reference one line at a time
	        String everything = null;

			try {
	            // FileReader reads text files 
	            FileReader fileReader = new FileReader(fileName);
	            // wraping FileReader in BufferedReader.
	            BufferedReader br =  new BufferedReader(fileReader);
	            // String Builder Object
	            StringBuilder sb = new StringBuilder();
	            String line = null;
	            while((line = br.readLine()) != null) 
	            {
	            	sb.append(line);
	            }   

	            // closing file.
	            br.close();
	            everything = sb.toString();
	            // System.out.println(everything);      
	        }
	        catch(FileNotFoundException e) 
	        {
	            System.out.println("can't open file '" + fileName + "'");                
	        }
	        catch(Exception e) 
	        {
	            System.out.println("Opss!!! Something Wrong");
	        }
			
	        // System.out.println(everything);
	        // now count 0 to 9 occurence
	        for (int i = 0; i < everything.length() ; i++ ) 
	        {
	        	char c = everything.charAt(i);
	        	if (c >= '0' && c <= '9') 
	        	{
	        		// increment count
	        		// ascii value of 0 = 48
	        		count[c-48] += 1;
	        	}
	        }

	        for (int i = 0; i < 10 ; i++ ) 
	        {
	        	System.out.println(i+" : "+count[i]);
	        }

		}

	}	
}