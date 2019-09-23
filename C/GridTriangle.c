// implimentation in c
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	for (int row = 1; row <= n; ++row)
	{
		for (int star = 1; star <= n; ++star)
		{
			for (int j = 0; j <= (n+1)*n -1; ++j)
			{
				if (j%(n+1) < star)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}