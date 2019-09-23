// to comile: javac Sum.java
// to run   : java Sum
// where "Sum.java" is file name and "Sum" is class name 

import java.util.Scanner;
public class Sum{
	public static int sum(int[] v, int n){
		int sum = 0;
		if (n == 0) {
			return 0;
		}else{
			// recursive call to the function with n-1
			sum = v[n-1] + sum(v,n-1);
			return sum;
		}
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.print("Enter the value of n : ");
		int n = in.nextInt();
		// declearing an arry of size n
		int[] v = new int[n];
		// assigning number 1 to n in the array
		for (int i = 0; i < n ; i++ ) {
			v[i] = i+1;
		}
		// calling function
		int sum = sum(v,n);
		// printing sum
		System.out.println("Sum of first "+n+" integer is : "+sum);
	}
}