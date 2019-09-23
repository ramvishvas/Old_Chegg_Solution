#include <stdio.h>
#include <stdlib.h>
int countModFive(int a[], int size)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (a[i] % 5 == 0)
		{
			++count;
		}
	}
	return count;
}
int main()
{
	int size, output;
	printf("Enter Size of Array : ");

	scanf("%d",&size);
	int array[size];

	for (int i = 0; i < size; ++i)
	{
		array[i] = rand() % 100 + 1;
	}
	for (int i = 0; i < size; ++i)
	{
		printf("%d ",array[i]);
	}
	printf("\n");

	output = countModFive(array, size);
	printf("\nCount of Number divisible by 5 : %d\n",output);
	return 0;
}