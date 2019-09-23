// pseudo code ............................................

// print "Welcome to the new world"
// print "Enter your magic number"
// number = input()
// squere = number * number
// print "Square of your magic number 'number' is 'square' "

// ........................................................
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int num, sqr;
	printf("........Welcome to the new World........\n");
	printf("\nPlease Enter your magic number (Integer) : ");
	scanf("%d",&num);
	sqr = num *num;
	printf("\nWow!!! Square of your magic number %d is %d\n\n",num, sqr);
}