#include <stdio.h>
void getchange(int ammount)
{
	int coin9, coin6, coin4, coin1;
	coin9 = ammount / 9;
	ammount = ammount % 9;
	coin6 = ammount / 6;
	ammount = ammount % 6;
	coin4 = ammount / 4;
	ammount = ammount % 4;
	coin1 = ammount;
	printf("%d\t%d\t%d\t%d\n",coin9, coin6, coin4, coin1);
}
int main()
{
	int ammount;
	printf("Enter Ammount: ");
	scanf("%d",&ammount);
	getchange(ammount);
	return 0;
}