Create an application that calculates the area of various shapes.
Console
Welcome to the Area Calculator

Calculate area of a circle, square, or rectangle? (c/s/r): c

Enter radius: 15

The area of the Circle you entered is 706.8583470577034

Continue? (y/n): y

Calculate area of a circle, square, or rectangle? (c/s/r): r

Enter width: 15
Enter height: 20

The area of the Rectangle you entered is 300.0

Continue? (y/n): n
Specifications
Create an abstract class named Shape. This class should contain an abstract method named getArea() that returns a double type.
Create a class named Circle that inherits the Shape class and contains these constructors and methods:
public Circle(double radius)
public double getRadius()
public void setRadius(double radius)
public double getArea()
Create a class named Square that inherits the Shape class and contains these constructors and methods:
public Square(double width)
public double getWidth()
public void setWidth(double width)
public double getArea()
Create a class named Rectangle that inherits the Square class and contains these constructors and methods:
public Rectangle(double width, double height)
public double getHeight()
public void setHeight(double height)
public double getArea()
Use the following formulas to calculate area:
Circle: Area = radius2 * pi
Square: Area = width2
Rectangle: Area = width * height