#include <stdio.h>
void PrintArray(int size, int array[]) 
{
	// printing requred output
	for ( int i= 0 ; i<size; i++)
	{
		printf ("array[%d] = %d\tAddress = %p\n" , i, array [i],&array[i]);
	}
}
// swaping using pointer
void swap ( int *var1, int *var2) 
{
	int temp = *var1;
	*var1 = *var2;
	*var2 = temp;

}
// selection sort
void SelectionSort( int size, int array[])
{
	int minIndex; // define minimum index
	for (int i = 0; i < size - 1; ++i)
	{
		// assign minIndex with i
		minIndex = i;
		for (int j = i+1; j < size; ++j)
		{
			// if lower number found the update minIndex
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}
		// swap number at index i and minIndex
		swap(&array[i], &array[minIndex]);
	}
}
int main () 
{
	int data[] = { 2 , 7 , 8 , -8 , 1 , 9 , 3 , 5 };
	SelectionSort(sizeof(data)/sizeof(int), data);
	PrintArray(sizeof(data)/sizeof(int), data);
	return 0;
}

