#include <iostream>
#include <string>
using namespace std;
float power(float x, float y)
{
	// indeterminate form
	if (x == 0 && y == 0)
	{
		return -1;
	}
	// if x is 0
	else if (x == 0)
	{
		return 0;
	}
	// if y is 0
	else if (y == 0)
	{
		return 1;
	}
	//else
	return x*power(x,y-1);
}

void reverse(const string& str)
{
	size_t len = str.size();
	if (len == 0)
	{
		return;
	}
	else if(len == 1)
	{
       cout << str << endl;
	}
    else
    {
       cout << str[len-1];
       reverse(str.substr(0, len-1));
    }
}

int sum(int n)
{
	// if number is negative return 0
	if (n <= 0)
	{
		return 0;
	}
	//else
	return n+sum(n-1);
}

int main()
{
	cout<<"power(0,0): "<<power(0,0)<<endl;
	cout<<"power(0,4): "<<power(0,4)<<endl;
	cout<<"power(4,0): "<<power(4,0)<<endl;
	cout<<"power(2,3): "<<power(2,3)<<endl;

	reverse("");
	reverse("ramvishvas");

	cout<<"\nsum(10): "<<sum(10)<<endl;
	return 0;
}