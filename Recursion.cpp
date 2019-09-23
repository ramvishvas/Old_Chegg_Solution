#include <iostream>
// for <streamsize> 
#include<ios>      
// for numeric_limits 
#include<limits> 

#define N 101 // this is for size of array for 100 character
using namespace std;
int sum(int n)
{
	// base case
	if(n <= 0)
	{
		return 0;
	}
	// recursive call
	return n+sum(n-1);
}
int str_length(char s[], int counter)
{
	// base case
	if (s[0] == '\0')
	{
		return counter;
	}
	//recursive call
	return str_length((s+1), ++counter);
}
// // option 2:
int str_length(char s[])
{
	// base case
	if (s[0] == '\0')
	{
		return 0;
	}
	//recursive call
	return 1+str_length((s+1));
}

int main()
{
	// initiizing array with NULL
	char s[N] = {'\0'}; 
	char choice = 'y';
	int num;

	while(true)
	{
		// discards the input buffer 
		cout<<"Enter a positive integer: ";
		cin>>num;
		cout<<"The sum of 1+2+...+"<<num<<" is: "<<sum(num)<<endl;

		cout<<"Enter a sentence: ";
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cin.get(s, sizeof(s)); // get N character
		cin.get(); // get newline character
		cout<<"It contains "<<str_length(s)<<" chars, including white spaces"<<endl;
		cout<<"It contains "<<str_length(s, 0)<<" chars, including white spaces"<<endl;

		cout<<"Do you want to have another run? Y/N: ";
		cin>>choice;
    	// discards the input buffer 
    	cin.ignore(numeric_limits<streamsize>::max(),'\n'); 

		if (choice == 'n' || choice == 'N')
		{
			break;
		}
	}
	return 0;
}