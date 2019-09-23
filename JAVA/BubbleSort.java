import java.util.ArrayList;
import java.util.Random;

public class BubbleSort
{
	public static void mySort(ArrayList<Integer> arr)
	{
		for (int i = 0; i < 10 ; i++)
		{	
			for (int j = 0; j < 10-i-1; j++)
			{
				// get number at index j and j+1
				int temp1 = arr.get(j);
				int temp2 = arr.get(j+1);
				// check if temp1 > temp2 and swap jth index number with (j+1)th index
				if (temp1 > temp2) 
				{
					arr.set(j, temp2);
					arr.set(j+1, temp1);
				}	
			}
		}
	}

	public static void main(String[] args) 
	{
		//declaring ArrayList with initial size 10
        ArrayList<Integer> arr = new ArrayList<Integer>(10); 

        // create instance of Random class 
        Random rand = new Random(); 
  
        // Appending the new element at the end of the list 
        for (int i = 1; i <= 10; i++) 
        {
        	// Generate random integers in range 0 to 99
        	int num = rand.nextInt(100); 
            arr.add(num);
        }
  
        // Printing elements of unsorted arraylist
        System.out.println(arr);
        
        //calling mySort function
        mySort(arr);

        // Printing elements of sorted arraylist
        System.out.println(arr); 
  
	}
}