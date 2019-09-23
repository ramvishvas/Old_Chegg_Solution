#include <stdio.h>
void transposeMatrix(int M[4][5], int N[5][4])
{	
	int i, j;
	// variable i will access each row index 1 by 1
	for (i = 0; i < 4; ++i)
	{
		// var j will access all column index for each row i
		for (j = 0; j < 5; ++j)
		{	
			// place 1st row of M into 1st column of N
			N[j][i] = M[i][j];
		}
	}
}
int main(int argc, char const *argv[])
{
	int i, j;
	// define  array M(4x5) abd initilized it
	int M[4][5]={
				{1, 2, 3, 4, 5},
				{6, 7, 8, 9, 10},
				{11, 12, 13, 14, 15},
				{16, 17, 18, 19, 20}
				};
	// define array N[5x4] and initilizedit with 0
	int N[5][4] = {0};
	// call transposeMatrix function
	transposeMatrix(M, N);
	// print original matrix M
	for (i = 0; i < 4; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			printf("%4d ",M[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	//print transpose matrix N
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("%4d ",N[i][j]);
		}
		printf("\n");
	}
	return 0;
}