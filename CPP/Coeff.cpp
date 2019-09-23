// please see the hand written note carefully you will understand everything
// if you have any doubt you can ask
// if any error occure please let me know
// please give it a like if you feel so
#include <iostream>
using namespace std;

double coeff[20] = {0};//global coeff array

// it will calculate a^b
double power(int a, int b){
	double pow = 1;
	if (b == 0){
		return 1;
	}else {
		for (int i = 0; i < b; ++i) {
			pow *= (double)a;
		}
	}
	return pow;
}


// it will calculate nCr
double nCr(int n, int r){
	double ncr = 1.0;
	// return 1 if n=0 or r=0 or n=r
	if (n == 0 || r == 0 || n == r){
		return 1;
	}else{
		// please see hand written note
		for (int i = 0; i < r; ++i){
			ncr = ncr * ((double)(n-i) / (double)(i+1));
		}
	}
	return ncr;
}

// this is the main logic
// please look on hand written note to understand it
void coeffCalculator(int a, int b, int c, int d){
	for (int r = 0; r <= d; ++r) {
		for (int i = 0; i <= r; ++i) {
			int index = 2*(d-r)+i; // compute index
			// compute the value using formula derived in hand written notes
			long value = nCr(d, r) * nCr(r, i) * power(a, d-r) * power(b, i) * power(c, r-i);
			// update the value at calculated index
			coeff[index] = coeff[index] + value;
		}
	}
}
// print result
void printCoeff(int d){
	for (int i = 2*d; i >= 0; --i){
		cout<<coeff[i]<<" ";
	}
	cout<<"\n";
}
// validate input
int validateInput(int a, int b, int c, int d){
	if (a != 0 && a>=-3 && b>=-3 && c>=-3 && a<=3 && b<=3 && c<=3 && d>=1 && d<= 10)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int a, b, c, d, n;
	cout<<"Enter n : ";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b>>c>>d;
		if (validateInput(a,b,c,d) == 1) {
			coeffCalculator(a,b,c,d);
			printCoeff(d);
		}else{
			cout<<"Opps!!! wrong Input\n";
		}
	}	
	return 0;
}