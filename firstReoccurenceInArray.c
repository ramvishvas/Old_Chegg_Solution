#include <stdio.h>
// function which finds the first recurring character and returns it
int recurringCharacterChecker(char *array, int SIZE)
{ 
    // An integer to store presence/absence 
    // of 26 characters using its 32 bits.
    // from right to left
    unsigned int checker = 0; 
  
    for (int i = 0; i < SIZE; ++i) 
    { 
        int index = (array[i]-'a');
        // check if bit corresponding to current 
        // character is already set 
        // using bitwise and left shift of 1 by index
        if ((checker & (1 << index)) > 0) 
            return i; 
  
        // set cussosponding bit of character in checker 
        checker |= (1 << index); 
    } 
    return -1; 
}

int main(void)
{

	int index;
	char arr1[4]={'A', 'B', 'C', 'A'};
	char arr2[5]={'B', 'C', 'A', 'B', 'A'};
	char arr3[3]={'A', 'B', 'C'};
	// ...............................................
	index = recurringCharacterChecker(arr1, 4);
	if (index >= 0)
	{
		printf("The first reoccuring character is: %c\n\n",arr1[index]);
	}
	else
	{
		printf("All character are unique\n");
	}

	// ......................................................
	index = recurringCharacterChecker(arr2, 5);
	if (index >= 0) 
	{
		printf("The first reoccuring character is: %c\n\n",arr2[index]);
	}
	else
	{
		printf("All character are unique\n");
	}
	// ...................................
	index = recurringCharacterChecker(arr3, 3);
	if (index >= 0)
	{
		printf("The first reoccuring character is: %c\n\n",arr3[index]);
	}
	else
	{
		printf("All character are unique\n");
	}
	return 0;
}