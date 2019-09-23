#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n, temp;
	double result = 1;
	printf("Enter n of Xn : ");
	scanf("%d",&n);
	for (int i = n; i >= 1; --i)
	{
		temp = (100 / i);
		result = result * temp;
	}
	printf("Xn = %0.1lf\n", result);
	return 0;
}