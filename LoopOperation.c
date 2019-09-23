#include <stdio.h>
void main()
{
	int arr[10];
	//............................................
	for (int i = 1; i < 10; i = i+2) //i change initilized value
	{
		arr[i] = i+10;
	}
	//...........................................
	// just printing the stored number
	for (int i = 0; i < 10; i = i+1)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}