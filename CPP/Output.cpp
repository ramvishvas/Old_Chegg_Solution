#include <iostream>
using namespace std;
int main(){
	bool flag;
	flag = true;
	int data[200];
	char name ='a';
	int i, j, k, l, m = 0;
	do{
		for (i = -2; i <= 0; i++) {
			for (j = -3; j <= 1; j++) {
				data[m] = i;
				k = i*2 - j + data[m];
				if (abs(i+j) == 1 || j == 1) {
					cout<<"#";
				}
				else if ( j == 2 || i < k) {
					cout<<"+";
				}
				else {
					cout<<j<<endl;
				}
				m++;
			}
		}
		cout<<name;
		name++;
		if (name == 'c') {
			flag = false;
		}else{
			// nap
		}
	}while(flag);
	return 0;
}