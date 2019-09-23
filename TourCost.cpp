#include <iostream>
using namespace std;
int main()
{
	int adult, senior, children, infant, bags, age;
	char choice;
	float cost;

	cout<<"Enter your Age: ";
	cin>>age;
	if (age >= 18)
	{
		cout<<"Do you want to book ticket? (y or n): ";
		cin>>choice;
		switch(choice)
		{
			case 'y':
				cout<<"Enter No. of Adults: ";
				cin>>adult;
				cout<<"Enter No. of Seniors: ";
				cin>>senior;
				cout<<"Enter No. of Children: ";
				cin>>children;
				cout<<"Enter No. of Infants: ";
				cin>>infant;
				cout<<"Enter No. of bags: ";
				cin>>bags;

				cost = adult*147.30 + senior*137.75 + (children - infant)*110.25;
				// adding luggage costs
				// i assume if you hv more than 1 bag then it will cost 35 extra for each bag
				// because instruction is not cleared
				cost += bags*20 + (bags-1)*35;

				cout<<"Total Cost: "<<cost<<endl;
				break;
			default:
				cout<<"Bye!!!\n";
		}

	}
	else
	{
		cout<<"You are not elisible to book ticket\n";
	}
	return 0;
}