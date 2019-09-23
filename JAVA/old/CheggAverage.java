import java.util.Scanner;
import java.util.ArrayList;

public class CheggAverage{
	private int[] array = null;
	private int size = 0;

	void input(){
		// array list taken beccause of dynamically sized
		ArrayList<Integer> a = new ArrayList<Integer>();
		Scanner in = new Scanner(System.in);

		System.out.print("Enter A positive Integer or -1 to exit : ");
		int n = in.nextInt();

		// taking input if user did not enter -1
		while(n != -1){

			// if number is <= 0 skip that number
			if (n <= 0) {
				System.out.print("Oops!!! Enter Only positive Integer or -1 to exit : ");
				n = in.nextInt();
			}
			// add positive integer to arraylist
			else{
				a.add(n);
				++size;
				System.out.print("Enter A positive Integer or -1 to exit : ");
				n = in.nextInt();
			}
		}

		// converting arraylist to array
		array = new int[size];
		for (int i = 0; i < size ; i++ ) {
			array[i] = a.get(i);
		}
		// clear array list
		a.clear();
	}

	// printing array
	void print(){
		for (int i = 0; i < size ; i++ ) {
			System.out.print(array[i]+" ");
		}
		System.out.println();
	}

	// finding smallest
	int smallest(){
		int smallest = array[0];
		for (int i = 1; i < size ; i++ ) {
			if (smallest > array[i]) {
				smallest = array[i];
			}
		}

		return smallest;
	}

	// finding largest
	int largest(){
		int largest = array[0];
		for (int i = 1; i < size ; i++ ) {
			if (largest < array[i]) {
				largest = array[i];
			}
		}

		return largest;
	}

	// finding location of given number
	void location(){
		Scanner in = new Scanner(System.in);
		// take new number you want to find location
		System.out.print("Enter An Integer to find Location : ");
		int n = in.nextInt();
		in.close(); // close scanner object

		int loc = -1; // initially
		for (int i = 0; i < size ; i++ ) {
			if (array[i] == n) {
				loc = i+1;
				break; // if first match found then break the loop
			}
		}
		if (loc == -1) { // if number not found
			System.out.println("Location of "+n+" : Not Found");
		}else{ // if number found
			System.out.println("Location of "+n+" : "+loc);
		}
	}

	// finding anerage
	void average(){
		int sum = 0; // initially
		for (int i =0;i<size ;i++ ) {
			sum+=array[i];
		}
		System.out.println("Average is : "+((float)sum/size));
	}

	// calling all funstion to display output
	static void output(){
		Average obj = new Average();
		obj.input();

		System.out.print("\n\nArray Is : ");
		obj.print();

		// checking size
		if (obj.size > 0) {
			System.out.println("Smallest is : "+obj.smallest());
			System.out.println("Largest is : "+obj.largest());
			obj.average();
			obj.location();
		}
	}

	// main function
	public static void main(String[] args) {
		output();
	}
}