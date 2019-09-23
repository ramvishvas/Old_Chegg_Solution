// please give it a thumbs up
// How to compile and run ->>>>>>>>>
// to compile ->>  javac -d . Main.java
// to run it  ->>  java edu.cscc.Main

package edu.cscc;
import java.util.Scanner;
import static java.lang.Math.PI; // import PI value

// TODO add comments with your name and the purpose of the program
public class Main {

    private static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

		double radius, area, perimeter;
		// TODO your code goes here
		System.out.println("Circle program");

		System.out.print("Enter the radius of your circle: ");
		radius = input.nextDouble(); // taking radius as nput

		if (radius >= 0) { // check validity of radius
			area = PI*radius*radius; // calculation of area
			perimeter =  2*PI*radius;// calculation of perimeter

			System.out.println("The area of a circle with a radius of "+radius+" is "+area);
			System.out.println("The perimeter of a circle with a radius of "+radius+" is "+perimeter);
			System.out.println("Process finished with exit code 0");	
		}else{
			System.out.println("Opps!!! radius can not be negative");
		}

    }
}





