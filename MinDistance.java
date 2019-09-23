
import java.util.Scanner;

class MinDistance{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in); // Scanner object for taking input
		int exit = 0;
		System.out.print("Enter Size of Array : ");
		int n = in.nextInt(); // taking size of array as input
		int[] a = new int[n]; // declearing array of given size

		for (int i=0; i<n; i++) { // taking n numbers as input in array
			System.out.print("Enter "+(i+1)+" No. : ");
			a[i] = in.nextInt();
		}

		System.out.println();

		for (int i=0; i<n; i++) { // printing given numberes
			System.out.print(a[i]+" ");
		}
		

		do{
			System.out.print("\n\nEnter target Number : ");

			int target = in.nextInt(); // taking target number as input

			//Main logic

			int minDistance = -2; // initially minimum sum is -2
			int preIndex = 0;   // initially preIndex is 0
			for (int i=0; i < n;i++ ) {

				if (a[i] == target && minDistance == -2) { // it will check 1st occurance of target number in array
					preIndex = i;
					minDistance = -1; //if target occure only once set minDistance = -1;
				}
				else if (a[i] == target && minDistance == -1) { // it will check second occurance
					minDistance = i - preIndex -1; // set minDistance = currentIndex - prevIndex -1;
					preIndex = i; //update previous index
				}
				else if (a[i] == target){ // if target occure more than pwice
					if (minDistance > i-preIndex-1) { // if previous minimum distance is greater than currect minimum distance
						minDistance = i-preIndex-1; // update minimum distance
					}

					preIndex = i; // update previous index

					// System.out.println("Index : "+i);
				}
			}

			//End of main logic

			System.out.println("Minimum Distance : "+minDistance);

			System.out.print("\nEnter 0 to Continue and 1 to Exit : ");
			exit = in.nextInt();
			
		}while(exit == 0);
		in.close(); //closing scanner object
	}
}

// to compile ->>> javac MinDistance.java 
//  to run    ->>> java MinDistance