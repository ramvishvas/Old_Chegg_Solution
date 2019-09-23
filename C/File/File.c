#include <stdio.h>
#include <stdlib.h>

void print(int array[]){
	for (int i = 0; i < 10; ++i)
    {
    	printf("%d  ",array[i]);
    }
    printf("\n");
}
// orting algorithms
// Find the minimum element in array and swap it with 1st number and dont touch 1st number
// Find the minimum element in remaining array and swap it from 2nd number and dont touch 1st and 2nd number
// Find the minimum element in remaining array and swap it from 3rd number and dont touch 1st, 2nd and 3rd number
// repeate this process .......
void sortArray(int array[]){
	// here im using selection sort
	int temp = 0, minIndex = 0;
	for (int i = 0; i < 9; ++i){
		// assume minimum index is i
		minIndex = i;
		for (int j = i+1; j < 10; ++j){
			// if minimum number found update index
			if (array[minIndex] > array[j]){
				minIndex = j;
			}
		}
		// swap ith number with minimum number
		temp = array[i];
		array[i] = array[minIndex];
		array[minIndex] = temp;
	}
}



void readInteger(char* filename, int array[]){
	int num, i = 0;
	// opening file in read mode
	FILE *ifp = fopen(filename, "r");
	// file open error handling
	if (ifp == NULL){
		printf("Can't open input file %s!\n", filename);
		exit(1);
	}
	// reading 10 number from file
	while (!feof(ifp) && i < 10){  
      	fscanf(ifp, "%d", &num);
      	array[i] = num;
      	++i; // incrementing index/count    
    }
	fclose(ifp);
}
int main(int argc, char* argv[])
{	// creating array of 10 integer and initilizing all of it to 0
	int array[10] = {0};
	// input checking
	if(argc < 2){
		printf("Usage Error: <executable> <inputFile>\n");
		exit(1);
	}
	printf("Initiall Array :\n"); // Initially printing array
	print(array);
	readInteger(argv[1], array); // calling readInteger function by passing filename and array
	printf("\nArray After reading number :\n"); 
	print(array); // printing array after reading number
    sortArray(array); // calling sort function
    printf("\nArray after sorting :\n");
	print(array); // printing array after sorting
}