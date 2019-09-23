import java.util.Scanner;
//abstract class
abstract class Shape
{
	abstract double getArea();
}
// circle class
class Circle extends Shape
{
	//instance variable
	double radius;
	//constructer
	public Circle(double radius)
	{
		this.radius = radius;
	}
	public double getRadius()
	{
		return this.radius;
	}
	public void setRadius(double radius)
	{
		this.radius = radius;
	}
	// area calculator method
	public double getArea()
	{
		return Math.PI*radius*radius;
	}
}

class Square extends Shape
{
	//instance variable
	double width;
	//constructer
	public Square(double width)
	{
		this.width = width;
	}
	public double getWidth()
	{
		return this.width;
	}
	public void setWidth(double width)
	{
		this.width = width;
	}
	// area calculator method
	public double getArea()
	{
		return width*width;
	}
}

class Rectangle extends Shape
{
	//instance variable
	double width, height;
	//constructer
	public Rectangle(double width, double height)
	{
		this.width = width;
		this.height = height;
	}
	public double getHeight()
	{
		return this.height;
	}
	public void setHeight(double height)
	{
		this.height = height;
	}
	// area calculator method
	public double getArea()
	{
		return height*width;
	}

}
public class Area
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.println("Welcome to the Area Calculator");
		while(true)
		{
			System.out.print("Calculate area of a circle, square, or rectangle? (c/s/r): ");
			char ch = in.next().charAt(0);
			switch(ch)
			{
				case 'c':
					System.out.print("Enter radius: ");
					double radius = in.nextDouble();
					Circle co = new Circle(radius);
					System.out.println("The area of the Circle you entered is "+co.getArea());
					break;
				case 's':
					System.out.print("Enter width: ");
					double width = in.nextDouble();
					Square so = new Square(width);
					System.out.println("The area of the Square you entered is "+so.getArea());
					break;
				case 'r':
					System.out.print("Enter width: ");
					double w = in.nextDouble();
					System.out.print("Enter height: ");
					double h = in.nextDouble();
					Rectangle ro = new Rectangle(w, h);
					System.out.println("The area of the Square you entered is "+ro.getArea());
					break;
				default:
					System.out.println("Opss... Invalid Choice");

			}
			System.out.print("Continue? (y/n): ");
			char choice = in.next().charAt(0);
			if (choice != 'y') 
			{
				break;
			}
		}
		in.close();
	}
}