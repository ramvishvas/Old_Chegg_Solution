import java.util.Scanner;
public class DateFormat
{
	public static boolean checkInput(String date)
	{
		// check length of input string is 10 or not
		if (date.length() != 10) 
		{
			return false;	
		}
		// check index of / 
		else if(date.indexOf('/') != 2 || date.lastIndexOf('/') != 5) 
		{
			return false;
		}
		else 
		{
			for (int i = 0; i < 10 ; i++ ) 
			{
				// if / encounter then skip it
				if (i == 2 || i == 5) 
				{
					continue;	
				}
				char ch = date.charAt(i);
				// check the range of character
				if (ch < '0' || ch > '9') 
				{
					return false;	
				}
			}
		}
		// return true
		return true;
	}
	public static String getCorrectInput()
	{
		Scanner in = new Scanner(System.in);
		String date = "01/01/2019";
		while(true)
		{
			System.out.print("Enter Date(MM/DD/YYYY) : ");
			date = in.nextLine();
			// check is date valid
			if (checkInput(date))
			{
				break;
			}
			else
			{
				System.out.println("Opss!!! Invalid Date Format");
			}
		}
		in.close();
		return date;
	}

	public static boolean isLeapYear(int year)
	{
		if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
		{
			return true;
		}
		
		return false;
	}
	public static void main(String[] args) 
	{
		String[] mongths = {"January", "February", "March", "April", "May", "June ", "July ",
							"August", "September", "October", "November", "December"};
		int[] days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		String date = getCorrectInput();
		// split mongth, day and year
		String[] dateArray = date.split("/");
		// get value of mongth day and year
		int mongth = Integer.parseInt(dateArray[0]);
		int day = Integer.parseInt(dateArray[1]);
		int year = Integer.parseInt(dateArray[2]);
		// chech mongths
		if (mongth >= 1 && mongth<= 12) 
		{	
			// check day
			if (day <= days[mongth-1]) 
			{
				System.out.println(mongths[mongth-1]+" "+day+", "+year);
			}
			else if(mongth == 2 && day == 29 && isLeapYear(year))
			{
				System.out.println(mongths[mongth-1]+" "+day+", "+year);
			}
			else
			{
				System.out.println("Day is out of Bound");
			}
		}
		else
		{
			System.out.println("Month is out of Bound");
		}
	}
}