#include<iostream> // required header file for input/output
#include<string>
using namespace std;

#define N 2

int main(int argc, char const *argv[])
{
	// define 4 parallel array
	string name[N];
	long long UPC[N];
	float price[N];
	bool sale[N];
	// another variable defn
	int i, choice;

	//store item details
	for (i = 0; i < N; ++i)
	{
		cout<<"Enter "<<(i+1)<<" item name: ";
		cin>>name[i];
		cout<<"Enter "<<(i+1)<<" item UPC Number: ";
		cin>>UPC[i];
		cout<<"Enter "<<(i+1)<<" item Regular Price: ";
		cin>>price[i];
		cout<<"Enter "<<(i+1)<<" item sale satus: ";
		cin>>boolalpha>>sale[i];
		cout<<"\n";
	}

	// for (int i = 0; i < N; ++i)
	// {
	// 	cout<<name[i]<<"\t"<<UPC[i]<<"\t"<<price[i]<<"\t"<<sale[i]<<"\n";
	// }
	while(true)
	{
		cout<<"Enter index to know detail or -1 to exit: ";
		cin>>choice;
		if (choice == -1)
		{
			cout<<"Thnk You\n";
			break;
		}
		else if (choice < 0 || choice > N)
		{
			cout<<"\nOpss... index out of bound\n";
		}
		else
		{
			cout<<"Name    : "<<name[choice]<<endl;
			cout<<"UPC Number: "<<UPC[choice]<<endl;
			cout<<"Price     : "<<price[choice]<<endl;
			cout<<"Status    : "<<boolalpha<<sale[choice]<<"\n\n";
		}
	}

	return 0;
}