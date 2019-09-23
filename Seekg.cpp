#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() 
{
	int inputNum;
	// Create input stream and open input csv file.
  	ifstream inputFile;
   	inputFile.open("card.txt");
	// Verify file opened correctly.
	// Output error message and return 1 if file stream did not open correctly.
	if (!inputFile.is_open())
	{
	    cout<< "Error:: File Open";
	   	exit(1);
	}
	cout<<"Enter a Number of a card, from 1 to 52 : ";
	cin>>inputNum;
	if (inputNum < 1 || inputNum > 52)
	{
		cout<<"Opss!!! Invalid Choice\n";
		inputFile.close();
		exit(0);
	}
	// cout<<inputNum;
	// go to desire position
	inputFile.seekg (20*(inputNum-1)+ (inputNum - 1) , ios::beg);
	string description;
	// get card description
	getline(inputFile ,description);
	cout << description << endl;

	return 0;
}

