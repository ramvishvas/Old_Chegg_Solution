#include <stdio.h>
#include <assert.h> 
float balance(int n, int i)
{
	// Programmer assumes x to be >= 0 in rest of the code
	assert(n>=0);
	if (n == 0)
	{
		return 1000;
	}
	return (1 + i/1200.0) * balance(n-1, i);
}

int main()
{
	int n, i;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter i: ");
	scanf("%d",&i);
	if (n >= 1 && n <= 100 && i>= 1 && i <= 5)
	{
		printf("After %d months, $1,000 becomes $%.2f\n",n, balance(n, i));
	}
	else
	{
		printf("Invalid Input\n");
	}
	
	return 0;
}