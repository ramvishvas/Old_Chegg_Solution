#include <stdio.h>
#include <stdlib.h>
int A[40];
int fillArray(int low,int high)
{ //fills random array with one dimension
	for(unsigned int i = 0; i < 40; ++i) 
	{
		int newrand = low+(rand()% high);
		A [i] = newrand;
		printf("%i ", A[i]);
	}
}

int findSequence(int x, int y)
{
	//scan n-1 elements
	for(unsigned int i = 0; i < 39; ++i) 
	{ // match for number
		if (A[i] == x && A[i+1] == y)
		{
			// in your 1st example its returning i
			// and in your 2nd example its returning i+1
			// hut here im returning i
			return i;
		}
	}
	//if not found
	return -1;
}

int main()
{
	int low,high, x, y;
	printf("Pick a random low integer ");
	scanf("%d", &low);
	printf("Pick a random high integer ");
	scanf("%d", &high);
	fillArray (low,high);
	printf("\n");

	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	int t = findSequence(x,y);
	if (t == -1)
	{
		printf("Sequence not found\n");
	}
	else
	{
		printf("Dequence found at index %d\n",t);
	}
}

