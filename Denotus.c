#include <stdio.h>
int main()
{
	int n, large=0, medium=0, small=0, indv=0, total=0;
	printf("Enter the number of donuts: ");
	scanf("%d",&n);
	// check if n >= 40 then we can buy large box
	if (n >= 40)
	{
		large = n / 40; // get number of large box
		n = n % 40; // get remaining donuts
		printf("%d large boxes, ",large);
	}
	// check if n >= 20 then we can buy medium box
	if (n >= 20)
	{
		medium = n / 20; // get number of medium box
		n = n % 20; // get remaining donuts
		printf("%d medium boxes, ",medium);
	}
	// check if n >= 10 then we can buy small box
	if (n >= 10)
	{
		small = n / 10; // get number of small box
		n = n % 10; // get remaining donuts
		printf("%d small box, ",small);
	}
	// get total cost
	total =  large*16000 + medium*8500 + small*4500 + n*500;
	// print individual
	printf("%d individual donuts\n",n);
	// print total
	printf("Total Price = %d KRW\n",total);
	return 0;
}