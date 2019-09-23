import java.util.Scanner;
import java.util.ArrayList;
import java.io.File; 
import java.io.IOException; 
public class GetWordsFromFile
{
	public void getWordsFromFile(String filename) throws IOException
	{
		// create an arraylist of string
		ArrayList<String> al = new ArrayList<String>();
		// create an arraylist of integer
		ArrayList<Integer> count = new ArrayList<Integer>();
		// convert File object to Scanner 
	    Scanner sc = new Scanner(new File(filename));
	    // iterate through scanner object
	    while(sc.hasNext())
	    {
	    	// get next word
	        String s = sc.next();
	        // convert to lower case
	        s = s.toLowerCase();
	        // check is string already present in al
	        int index = al.indexOf(s);
	        // if present then update count to currosponding index
	        if (index != -1) 
	        {
	        	count.set(index, count.get(index)+1);
	        }
	        else // if not present add s to list
	        {
        		al.add(s);
        		count.add(1);
	        }
	        //System.out.println(s);
	    }
	    // print it
	    for (int i = 0; i < al.size() ; i++ ) 
	    {
	    	System.out.print(al.get(i)+"("+count.get(i)+") ");	
	    }
	    System.out.println();
	}
	public static void main(String[] args) throws IOException
	{
		String filename = "exampleText.txt";
		GetWordsFromFile obj = new GetWordsFromFile();
		obj.getWordsFromFile(filename);
	}
}