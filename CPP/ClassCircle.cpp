#include <iostream>
using namespace std;
class Circles   
{
	public:
		void setCenter(int x, int y);
		double findArea();
		double findCircumference();
		void printCircleStats(); // This outputs the radius and center of the circle.
		Circles (float r); // Constructor
		Circles(); // Default constructor
	private:
		float radius;
		int center_x;
		int center_y;
};   
const double PI = 3.14;
//___________________________________________________________________________

//Implementation section Member function implementation
Circles::Circles()
{
	radius = 1;
}

// Fill in the code to implement the non-default constructor
Circles::Circles(float r)
{
	radius = r;
}
// Fill in the code to implement the findArea member function
double Circles::findArea()
{
	return PI*radius*radius;
}

// Fill in the code to implement the findCircumference member function
double Circles::findCircumference()
{
	return 2*PI*radius;
}

// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
void Circles::printCircleStats()
{
	cout << "The radius of the circle is " << radius << endl;
	cout << "The center of the circle is (" << center_x
	<< "," << center_y << ")" << endl;
}

// This procedure will take the coordinates of the center of the circle from
// the user and place them in the appropriate member data.
void Circles::setCenter(int x, int y)
{
	center_x = x;
	center_y = y;
}

//Client sectio
int main()
{
	Circles sphere(8);
	sphere.setCenter(9,10);
	sphere.printCircleStats();
	cout << "The area of the circle is " << sphere.findArea() << endl;
	cout << "The circumference of the circle is "
	<< sphere.findCircumference() << endl;
	return 0;
}
