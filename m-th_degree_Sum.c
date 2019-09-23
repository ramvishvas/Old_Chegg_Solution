#include <stdio.h>
long mDegreeSumRec(long n, int m)
{
	long sum = n;
	if(m == 0)
	{
		return 0;
	}
	if (sum % 2 == 0)
	{
		// if sum is even then divide sum with 2 
		// and then multiply with (sum+1)
		sum = (sum/2)*(sum+1);
	}
	else
	{
		// if sum is not even then divide sum+1 with 2 
		// and then multiply with sum
		sum = sum*((sum+1)/2);
	}
	// if m == 1 the return sum from i to n
	if (m == 1)
	{
		return sum;
	}
	// recursive call with new value of sum;
	return mDegreeSumRec(sum, m-1);
}
long mDegreeSum(long n, int m)
{
	long sum = n;
	if(m == 0)
	{
		return 0;
	}
	for (int i = 1; i <= m; ++i)
	{
		// 1+2+3+4+......+n = n(n+1)/2
		if (sum % 2 == 0)
		{	
			// if sum is even then divide sum with 2 
			// and then multiply with (sum+1)
			sum = (sum/2)*(sum+1);
		}
		else
		{
			// if sum is not even then divide sum+1 with 2 
			// and then multiply with sum
			sum = sum*((sum+1)/2);
		}
	}
	return sum;
}
int main()
{
	int m;
	long res, n;
	// get input m and n
	printf("Enter m : ");
	scanf("%d",&m);
	printf("Enter n : ");
	scanf("%ld",&n);
	// calling Iterative fun
	res = mDegreeSum(n, m);
	printf("Iterative m-th Sum : %ld\n",res);

	// calling recursive fun
	res = mDegreeSumRec(n, m);
	printf("Recursive m-th Sum : %ld\n",res);
	return 0;
}