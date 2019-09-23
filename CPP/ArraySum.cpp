#include <iostream>
using namespace std;
// symbolic constants
#define MAX_ROW 3
#define MAX_COL 5
// sum function
int ArraySum(int arr[][MAX_COL], int r, int c)
{
	int sum = 0; // initial value
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			sum += arr[i][j]; // update sum
		}
	}
	return sum; // return sum
}

int main()
{
	// define and initilize numbers array
	int numbers[MAX_ROW][MAX_COL] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
										1, 2, 3, 4, 5};
	// call  ArraySum function and store return value in sum
	int sum = ArraySum(numbers, MAX_ROW, MAX_COL);
	// print sum value
	cout<<"Sum = "<<sum<<"\n";
	return 0;
}