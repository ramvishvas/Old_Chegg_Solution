#include<stdio.h>
#include <stdlib.h>
enum {MaxLine = 132, MaxChars = 127};

int main(int argc, char const *argv[])
{
	// variable for holding input and output file name
	char input[20], output[20];

	printf("Enter Input text file name : ");
	scanf("%s",input); // taking input file name

	printf("Enter Otput text file name : ");
	scanf("%s",output); // taking output filename

	int hist[MaxChars];
	FILE *fin, *fout; // Declaring fin and fout of type FILE *

	// Initialize all values in hist to 0:
	for (int index = 32; index < 127; index++)
	{
		hist[index] = 0;
	}
	// ...........................................
	// opening input file
	fin = fopen(input, "r");
	// file open error handling
	if (fin == NULL){
		printf("Can't open input file %s!\n", input);
		exit(1);
	}
	// if file successfully opened
	// Read all chars in fin and increment the value in hist as follows:
	int ch = getc(fin);
	while (ch != EOF) //feof(FileIn)
	{
		hist[ch]++;
		ch = getc(fin); //read a new char
	}
	fclose(fin); // input file closed

	// ............................................
	fout = fopen(output, "w");
	// file open error handling
	if (fout == NULL){
		printf("Can't open output file for writing %s!\n", output);
		exit(1);
	}
	// if file successfully opened
	for (int index = 32; index < 127; index++)
	{
		printf("%d: \t%c = \t%d\n", index, index, hist[index]);
		fprintf(fout, "%d: \t%c = \t%d\n", index, index, hist[index]);
	}
	// closing file
	fclose(fout);
}