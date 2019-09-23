#include <iostream>
using namespace std;
bool inCircle(float radius, float x1, float y1)
{
    // Compare radius of circle with distance  
    // of its center(0, 0) from given point 
    if ((x1 * x1) + (y1 * y1) == radius * radius)
    {
    	return true; 
    } 
    else
    {
        return false;
    }
}
int main()
{
	float radius, x1, y1;
	cout<<"Enter the radius of a cricle at center (0,0): ";
	cin>>radius;
	cout<<"Enter a point to check if it is your circle\n";
	cout<<"x1: ";
	cin>>x1;
	cout<<"y1: ";
	cin>>y1;
	if (inCircle(radius, x1, y1))
	{
		cout<<"This point is on your circle!\n";
	}
	else{
		cout<<"This point is NOT on your circle!\n";
	}
	return 0;
}