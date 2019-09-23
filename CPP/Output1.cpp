#include <iostream>
using namespace std;

int main()
{
	int y, x = 12;
	cout<<x+x*10<<endl;
	cout<<x/100<<endl;
	for (y=10; y < x; y++) cout<<y;
	cout<<endl;
	if (x>50)cout<<x; else cout<<2*x;
	cout<<endl;
	cout<<x<<"*"<<x<<endl;

	return 0;
}