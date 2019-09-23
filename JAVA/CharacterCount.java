import java.util.Scanner;
public class CharacterCount
{
	// return index associated with character
	public static int getIndex(char c)
	{
		return (c-65);
	}
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int[] array = new int[26];
		String text = "";

		while(true)
		{
			// scan text line
			System.out.print("Enter text or Exit : ");
			text = sc.nextLine();
			// convert to uppercase
			text = text.toUpperCase();
			// if user enters exit
			if (text.equals("EXIT")) 
			{
				break;
			}
			// scan and increment count of character
			for(int i = 0; i < text.length() ;i++ ) 
			{
				// get character at index i
				char c = text.charAt(i);
				// validate character
				if (c >= 'A' && c<= 'Z') 
				{
					// get index
					int index = getIndex(c);
					// update index
					array[index] += 1;	
				}
			}
			// printing
			for(int i = 0; i < 26 ;i++ ) 
			{
				// if character is present
				if (array[i] != 0) 
				{
					System.out.printf("%c : %d\n",(i+65),array[i]);
					array[i] = 0; // reset count to 0
				}
			}
		}
		
	}
}