#include <iostream>
using namespace std;
void printTree()
{
	int n = 5;
	// for line 1 to 5
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < n+i; ++j)
		{
			// if last line
			if (i == 5)
			{
				cout<<"    ***";
				break;
			}
			// prining required space
			else if (j <= n-i)
			{
				cout<<" ";
			}
			// printing required *
			else
			{
				cout<<"*";
			}
		}
		cout<<"\n";
	}
}
void printCat()
{
	cout<<"  /\\   /\\\n";
	cout<<"   o   o\n";
	cout<<"  =     =\n";
	cout<<"    ---\n";
}

void printNum()
{
	int n = 3, number;
	cout<<"Enter Number: ";
	cin>>number;
	// for line 1 to 5
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < n+i; ++j)
		{
			// prining required space
			if (j <= n-i)
			{
				cout<<" ";
			}
			// printing required *
			else
			{
				cout<<number;
			}
		}
		cout<<"\n";
	}
}
int main()
{
	printTree();
	cout<<"\n";
	printCat();
	cout<<"\n";
	printNum();
	return 0;
}
