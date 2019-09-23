#include <stdio.h>
int main()
{
	int n;

	printf("Enter a positive integer n: ");
	scanf("%d",&n); // get number n as input
	
	int Sums[n]; // decleared an array of size n
	int sum = 0; // initially sum is 0;
	// iterate loop n times
	for (int i = 1; i <= n; ++i)
	{
		sum = sum + i; // add next number to sum
		Sums[i-1] = sum; // store sum to array
	}
	// printing sum from array Sums
	for (int i = 0; i < n; ++i)
	{
		printf("The sum of positive integers from 1 to %d is %d\n",(i+1), Sums[i]);
	}
	return 0;
}