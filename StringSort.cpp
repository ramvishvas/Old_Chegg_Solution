#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int SIZE = 20;
	int min; // o store minimum index
	// name initilization
	string name[SIZE] = {"Collins, Bill", "Smith, Bart", "Michalski, Joe", 
	"Griffin, Jim" , "Sanchez, Manny" , "Rubin, Sarah" , "Taylor , Tyrone", 
	"Johnson, Jill" , "Allison, Jeff" , "Moreno, Juan", "Wolfe, Bill",
	"Whitman, Jean", "Moretti, Bella", "Wu, Hong" ,"Patel, Renee", "Harrison, Rose",
	"Smith, Cathy" , "Conroy, Pat", "Kelly, Sean", "Holland, Berth"};
	string temp; // temp string variable

	for (int i = 0; i < SIZE-1; ++i)
	{
		min = i; // consider i is inimum index
		for (int j = i+1; j < SIZE; ++j)
		{
			// if minimum string found then update index
			if (name[min] > name[j]){
				min = j;
			}
		}//swap string
		temp = name[i];
		name[i] = name[min];
		name[min] = temp;
	}
	// printing
	for (int i = 0; i < SIZE; ++i)
	{
		cout<<name[i]<<endl;
	}
	return 0;
}