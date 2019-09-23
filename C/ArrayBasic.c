#include <stdio.h>
// prototyping
void swapElements(int a[], int size);
void sumElements(int a[], int size);

void sumElements(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += a[i];
	}
	printf("Sum of Array : %d\n",sum);
}

void swapElements(int a[], int size)
{
	int t = a[0];
	a[0] = a[size -1];
	a[size - 1] = t;
}
int main()
{
	int array[] = {100, 10, 1, 5, -9};
	int size = 5;

	printf("initial Array :");
	for (int i = 0; i < size; ++i)
	{
		printf(" %d",array[i]);
	}
	printf("\n\n");

	printf("first : %d\n",array[0]);
	printf("last  : %d\n\n",array[4]);

	swapElements(array, 5);

	printf("first : %d\n",array[0]);
	printf("last  : %d\n\n",array[4]);

	sumElements(array, 5);

	printf("final Array :");
	for (int i = 0; i < size; ++i)
	{
		printf(" %d",array[i]);
	}
	printf("\n");
	return 0;
}