import java.util.Scanner;
import java.util.regex.Pattern;
class JavaOperation
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// set seperator to scanner object
		Pattern delimiters = Pattern.compile(System.getProperty("line.separator")+"|\\s");
		sc.useDelimiter(delimiters); 
		int[] array = new int[10];
		int count = -1;
		System.out.println("input either an integer or just <RETURN> (the ENTER key)");
		while(sc.hasNextInt())
		{
			// checking count
			if (count < 9) 
			{
				array[++count] = sc.nextInt();
			}
			else
			{
				// if more than 10 number is entered
				System.out.println("size of the array has been exceeded");
				break;
			}
		}
		sc.close();
		// print number
		if (count != -1) 
		{
			for (int i = 0; i <= count ;i++ ) 
			{
				System.out.print(array[i]+" ");
			}
			System.out.println();
		}
	}
}