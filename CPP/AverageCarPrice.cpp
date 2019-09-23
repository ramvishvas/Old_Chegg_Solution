#include <iostream>
using namespace std;
int main()
{
	int n = 100;
	float price[n], sum , max;
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter the price of Car #" << (i+1) <<" ";
		cin>>price[i];
	}

	max = price[0]; // initially
	sum = 0; // initially
	for (int i = 0; i < n; ++i)
	{
		if (max < price[i])
		{
			max = price[i];
		}
		sum += price[i];
	}

	// to set 3 decimal precision
	cout.setf(ios::fixed,ios::floatfield);
    cout.precision(3);

	cout<<"\nThe average price is: BD"<<(sum/n)<<"\n";
	cout<<"The highest price is: BD"<<max<<"\n";

	return 0;
}