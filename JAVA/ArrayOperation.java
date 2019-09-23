import java.util.Scanner;
// Student class
class Student{
	// instance variable teacher
	public String teacher;
	// constructure
	public Student(String s)
	{
		// set value of teacher
		this.teacher = s;
	}
}
public class ArrayOperation
{
	// get array average
	public static byte getArrayAverage(byte[] arr)
	{
		byte sum = 0; // initial sum is zero
		// scan all array
		for (int i = 0; i < arr.length ;i++) 
		{
			sum += arr[i]; // update sum
		}
		// return avg
		return (byte)(sum/arr.length);
	}

	public static byte getMaxByte(byte[] arr)
	{
		byte max = arr[0]; // intilize 1st number as maximum
		// scan all array
		for (int i = 1; i < arr.length ;i++) 
		{
			// if max is less than current number
			// then update max
			if (max < arr[i]) 
			{
				// update max
				max = arr[i];
			}
		}
		// returm max
		return max;
	}
	public static void main(String[] args) 
	{
		final byte SIZE = 100; // const variable with value 100
		byte[] byteArray = {10, 20, 30, 40}; // initilize array

		// get maximum of array
		System.out.println("Maximum : "+getMaxByte(byteArray));

		// get average of array
		System.out.println("Average : "+getArrayAverage(byteArray));

		// create scanner object to get input
		Scanner sc = new Scanner(System.in);
		// ask for name
		System.out.print("Enter your name : ");
		// get name
		String name = sc.nextLine();
		// convert to uppercase
		name = name.toUpperCase();
		// print name
		System.out.println("Your Name : "+name); 
		// student onject
		Student obj = new Student(name);
		// print teacher
		System.out.println("Teacter Name : "+obj.teacher);
	}
}