#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int user_number, r, c;
	cout<<"Enter n: ";
	cin>>user_number;
	if (user_number < 8 || user_number > 20)
	{
		cout<<"Invalid Choice\n";
	}
	for (r=1; r <= user_number; ++r)
	{
		for (c=1; c <= user_number; ++c)
		{
			cout<<"*";
		}
		cout<<"\n";
	}

	return 0;
}