#include <iostream>
using namespace std;
// claculate total backOrdered
int backOrdered(int on_hand,int back_ordered, int sell)
{
	return (sell - on_hand)+back_ordered;
}
// claculate on hand after sales
int afterSales(int on_hand, int sell)
{
	return (on_hand - sell);
}
// it will give total on hand
int generateTotal(int on_hand,char choice)
{
	if (choice == 'g')
	{
		return on_hand+123;
	}
	return on_hand+52;
}
void runInvSys()
{
	int month = 0, on_hand = 0, back_ordered = 0;
	int sell;
	char choice;
	cout<<"Welcome to Widget Co.!";
	do
	{
		cout<<"\n\nMonth: "<<month<<"  Number of Widget on-hand: "<<on_hand<<"  Number back-ordered: "<<back_ordered<<"\n";
		cout<<"Was it good or bad month (g/b)? ";
		cin>>choice;
		// get total on hand
		on_hand = generateTotal(on_hand,choice);
		cout<<"How many did the sales force sell? ";
		cin>>sell;
		// check is sell <= on hand
		if (on_hand >= sell)
		{
			// update on hand
			on_hand = afterSales(on_hand, sell);
			//  reset back_ordered
			back_ordered = 0;
		}
		else
		{
			// get back ordered
			back_ordered = backOrdered(on_hand, back_ordered, sell);
			// reset on hand
			on_hand = 0;
		}
		cout<<"Continue (y/n)? ";
		cin>>choice;
		if (choice == 'n')
		{
			cout<<"\nAt the end of month "<<month<<", you woud up with "<<on_hand<<" widgets on-hand and "<<back_ordered<<" widgets back-ordered\n";
			break;
		}
		// increase month
		month = month + 1;
	}while(1);
}
int main()
{
	runInvSys();
	return 0;
}