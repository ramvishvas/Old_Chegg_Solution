#include <stdio.h>

int main(void){
	unsigned long int i, j=0, sum=0;
	for (i=1.0995116e+12; i > 1 ; i=i/2)
	{
		// printf("%ld  ",j);
		j++;
		printf("i=%ld -> %ld --- ",i,j);
		for (; j>1 ; j=j/2)
		{
			sum++;
			printf("%ld\n",sum);

		}

		// printf("\n\n%ld  ---  %ld\n",j,sum);
	}
	printf("%ld\n",sum);
}