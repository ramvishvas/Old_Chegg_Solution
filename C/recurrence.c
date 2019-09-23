#include<stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int a[20] ={0};
	int count = 20, sum = 0;
	for (int i = 2; i < count; ++i)
	{
		sum = 0;
		for (int j = 2; j <= i-1; ++j)
		{
			sum += a[j];
		}
		printf("%d\n",sum);
		a[i] = (i-1)+(int)ceil((2*sum)/i);
	}
	for (int i = 0; i < count; ++i)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}