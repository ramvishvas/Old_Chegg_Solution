#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void countZero(int a[][3],int row,int col)
{
	int countZero = 0;// intial count is 0
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			// if 0 found
			if (a[i][j] == 0)
			{
				// increment count
				++countZero;
			}
		}
	}
	// print count
	printf("No of Zero in Array : %d\n", countZero);
}

void diagonal(double array2[][4], int row, int col)
{
	double arr[row][1]; // column array to store diagonal element
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			//  if element is diagonal
			if (i == j)
			{
				// sotre element
				arr[i][0] = array2[i][j];
			}
		}
	}
	// print diagonal element
	printf("\nDiagonal Element\n");
	for (int i = 0; i < row; ++i)
	{
		printf("%0.2lf\n",arr[i][0]);
	}
	printf("\n");

}

void arraySum(double *p, int size)
{
	double sum = 0; // initial sum is zero
	for (int i = 0; i < size; ++i)
	{
		sum += *(p+i); // update sum
	}
	// print sum
	printf("Sum : %0.2lf\n",sum);
}

int main()
{
	// array initilzation
	int array1[][3] = {{10, 0, 2},{7, 8, 3},{0, 0, 1}};
	double array2[4][4];
	double array3[] = {2.1, 4.8, 9.7, 0.2, 0.85};
	// call countZero Function
	countZero(array1, 3, 3);

	srand(time(NULL));
	// initilize array2  with random no
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			array2[i][j] = rand()%100;
		}
	}
	// print array2
	printf("\n");
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%0.2lf  ",array2[i][j]);
		}
		printf("\n");
	}
	// call diagonalfunction to get diagonal
	diagonal(array2, 4, 4);
	// call sum function to get sum of 1D array
	arraySum(array3, 5);

	return 0;
}