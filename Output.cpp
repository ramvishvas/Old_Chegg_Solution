#include <iostream>
// this ia not present in your code
using namespace std;

int fun_compute(int n);
int main()
{
	// for each value of i compute (1*2*3*.....*i)*i
	for (int i = 1; i <= 3; ++i)
		// print (1*2*3*.....*i)*i
		cout<<fun_compute(i)<<endl;
	return 0;
}

// this function will compute (1*2*3*4*5*6*7*8*.......*n)*n
// ie product of (1 to n)*n
int fun_compute(int n)
{
	int x = n; //  initilize x with n
	// loop from 1 to n
	for (int i = 1; i <= n; ++i)
		x*= i; // update x = x * i

	return x;
}
//for each value of i fun_compute(i)
// i 	fun_compute(i)
// 1 	1*1 = 1
// 2	1*2*2 = 4
// 3	1*2*3*3 = 18