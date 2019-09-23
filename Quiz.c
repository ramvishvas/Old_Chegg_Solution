#include <stdio.h>
int main()
{
	float number;
	printf("How much money you made last year: ");
	scanf("%f",&number);
	number = number*0.7;
	printf("After taxes: $%.2f\n", number);
	if (number < 0)
	{
		printf("invalid input\n");
	}
	else if (number >= 0 && number <= 20000)
	{
		printf("broke\n");
	}
	else if (number >= 20001 && number <= 60000)
	{
		printf("not bad\n");
	}
	else
	{
		printf("Ballin\n");
	}
	return 0;
}