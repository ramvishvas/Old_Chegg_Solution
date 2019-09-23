#include <iostream>
using namespace std;
class NumberArrayClass{
	private:
	float* a = NULL;
	int size = -1;
	int used = -1;

	public:
	NumberArrayClass(int n){
		a = new float[n]; // Dynamic Allocate to hold n number.
		size = n;
	}

	~NumberArrayClass(){
		delete [] a;  // When done, free memory.
		a = NULL;     // Clear a to prevent using invalid memory reference.
	}

	int storeNumber(float n){
		if (used < size){
			a[++used] = n;
			return 1;
		}
		return 0;
	}
	float retriveNumber(int index){
		static float const npos = -1;
		if(index <= used){
			return a[index];
		}
		return npos;
	}

	float highestValue(){
		static float const npos = -1;
		if(used == -1){
			return npos;
		}
		float max = a[0];
		for (int i = 1; i <= used; ++i){
			if(max < a[i]){
				max = a[i];
			}
		}
		return max;
	}

	float lowestValue(){
		static float const npos = -1;
		if(used == -1){
			return npos;
		}
		float min = a[0];
		for (int i = 1; i <= used; ++i){
			if(min > a[i]){
				min = a[i];
			}
		}
		return min;
	}
	float averageValue(){
		static float const npos = -1;
		if(used == -1){
			return npos;
		}
		float sum = 0;
		for (int i = 0; i <= used; ++i){
			sum += a[i];
		}
		return sum/(used+1);
	}
};

int main()
{
	int size, choice, temp;
	cout<<"Enter Size : ";
	cin>>size;
	NumberArrayClass obj(size);

	while(1){
		cout<<"1 -> Store A Number\n";
		cout<<"2 -> Retrive A Number\n";
		cout<<"3 -> Get Highest\n";
		cout<<"4 -> Get Lowest\n";
		cout<<"5 -> Get Average\n";
		cout<<"0 -> Exit\n";

		cout<<"What is your choice? ";
		cin>>choice;

		if(choice  == 0){
			break;
		}
		switch(choice){
			case 1:
				cout<<"Enter your Number: ";
				cin>>temp;
				obj.storeNumber(temp);
				break;
			case 2:
				int index;
				cout<<"Enter Index: ";
				cin>>index;
				temp = obj.retriveNumber(index);
				if (temp == -1.0) {
					cout<<"Index Out of Bound\n\n";
				}else{
					cout<<"Number at index "<<index<<" is "<<temp<<"\n\n";
				}
				break;
			default:
				break;
		}
	}
	
	return 0;
}