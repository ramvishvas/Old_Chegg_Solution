#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void countRepeat(const char* name, int a, int b, int c)
{
	int counta = 0, countb =0, countc = 0, num;
	// Openfiles to read input
   	FILE *fp = fopen(name, "r"); 

	if (fp == NULL) 
	{ 
	    puts("Could not open files"); 
	    exit(1); 
	} 

  	// printf("%d %d %d\n",n1,n2,n3);
  	while (!feof(fp))
    {  
      	fscanf (fp, "%d", &num);
      	// printf("%d ",num);
      	if(a == num)
      	{
      		++counta;
      	}
      	else if(b == num)
      	{
      		++countb;
      	}
      	else if(c == num)
      	{
      		++countc;
      	}
    }
	fclose(fp);
	printf("%d Appear %d times\n",a, counta);
	printf("%d Appear %d times\n",b, countb);
	printf("%d Appear %d times\n",c, countc);
}

void printNumber(int a, int b, int c)
{
	printf("\n1st Largest : %d\n",a);
	printf("2nd Largest : %d\n",b);
	printf("3rd Largest : %d\n\n",c);
}
// compression between two number
int compare(int a, int b)
{
	if (a > b)
	{
		return 1;
	}
	return 0;
}

void readNumber(const char* name)
{
	int n1 = (int)-INFINITY; // 1st large
   	int n2 = (int)-INFINITY; // 2nd large
   	int n3 = (int)-INFINITY; // 3rd large
   	int temp, num;
   	// Openfiles to read input
   	FILE *fp = fopen(name, "r"); 

	if (fp == NULL) 
	{ 
	    puts("Could not open files"); 
	    exit(1); 
	} 

  	// printf("%d %d %d\n",n1,n2,n3);
  	while (!feof(fp))
    {  
      	fscanf (fp, "%d", &num);
      	// printf("%d ",num);
      	if(compare(num, n1))
      	{
      		// update 1st large
      		temp = n1;
      		n1 = num;
      		// update 2nd large
      		num = n2;
      		n2 = temp;
      		// update 3rd large
      		n3 = num;
      	}
      	else if(compare(num, n2) && num != n1)
      	{
      		// update 2st large
      		temp = n2;
      		n2 = num;
      		// update 3rd large
      		n3 = temp;
      	}
      	else if(compare(num, n3) && num != n1 && num != n2)
      	{
      		n3 = num;
      	} 
    }
	fclose(fp); 
	
	// call print
	printNumber(n1,n2,n3);

	//call countRepeat
	countRepeat(name, n1,n2,n3);
}

// .................main function ...........................
int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		printf("Opss... Please enter file name also\n");
		exit(1);
	}
	const char *data1 = argv[1];

	readNumber(argv[1]);

// data1: 11 12 8 20 21 24 25 24 20 24 10 11 13 15 17 19 20 21 24 25
	return 0;
}