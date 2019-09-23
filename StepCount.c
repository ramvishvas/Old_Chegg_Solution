#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int const LOWERLIMIT = 0;
	int const UPPERLIMIT = 100;
	int start, end, step;

	printf("Enter Start Step: ");
	scanf("%d",&start);
	// checking start limits
	if (start >= LOWERLIMIT && start <= UPPERLIMIT)
	{
		printf("Enter End Step: ");
		scanf("%d",&end);
		printf("Enter Step Size: ");
		scanf("%d",&step);
		//validating steps
		if (step <= abs(end-start) && step > 0)
		{
			// for fordward moving
			if (end >= start)
			{
				// moving fordward
				for (int i = start; i <= end; i += step)
				{
					printf("%d  ",i);
				}
				printf("\n");
			}
			// for backward moving
			else
			{
				// moving backward moving
				for (int i = start; i >= end; i -= step)
				{
					printf("%d  ",i);
				}
				printf("\n");
			}
		}
		else
		{
			printf("Step Size not valid\n");
		}

	}
	else
	{
		printf("Start is not in range\n");
	}
}
