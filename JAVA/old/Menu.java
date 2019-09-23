import java.util.Scanner;
import java.lang.Math;

public class Menu{

	public void getRichQuick(){
		System.out.println("Very soon you are going to become ....... \n");
	}

	public void eTaylor(){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter an x:");
		int x = in.nextInt();
		System.out.println("e^"+x+" = "+Math.exp(x)+"\n");
	}

	public void palindromeCheck(){
		System.out.println("Palindrome finding is in process ........\n");
	}

	public void choice(){
		System.out.println("Welcome tp Lab5!");
		System.out.println("Enter 1 to check how long it takes to get rich on a magic dollar coin.");
		System.out.println("Enter 2 to calculate e^x for any real x.");
		System.out.println("Enter 3 to find pelindrom words in a text file.");
		System.out.println("Enter 4 to re-print the menu.");
		System.out.println("Enter 0 to exit.");
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Menu obj = new Menu();
		obj.choice();
		do{
			System.out.println("What is your choice?");
			int n = in.nextInt();
			if (n == 0) {
				System.out.println("Thanks for participating! Goodbye.");
				break;
			}else if (n == 1) {
				obj.getRichQuick();
			}else if (n == 2) {
				obj.eTaylor();
			}else if (n == 3) {
				obj.palindromeCheck();
			}else if (n == 4) {
				obj.choice();
			}else{
				System.out.println("Opps!!! Wrong Choice.\n");
			}
		}while(true);

		in.close();
	}
}