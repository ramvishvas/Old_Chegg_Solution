#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
// prototyping
float AVG(float array[], int size);

float AVG(float array[], int size)
{
	float sum = 0;
	// get sum
	for (int i = 0; i < size; ++i)
	{
		sum += array[i];
	}
	// cout<<sum;
	//return avg
	return (sum/size);
}

void occuranceOfAEI(string s)
{
	// initial count is 0
	int countA = 0;
	int countE = 0;
	int countI = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		// count a
		if (s.at(i) == 'a')
		{
			++countA;
		}
		// count e
		else if (s.at(i) == 'e')
		{
			++countE;
		}
		// count i
		else if (s.at(i) == 'i')
		{
			++countI;
		}
	}

	// print count
	cout<<"Count of 'a' : "<<countA<<endl;
	cout<<"Count of 'e' : "<<countE<<endl;
	cout<<"Count of 'i' : "<<countI<<endl;
}


float AVG5(int array[], int size)
{
	float sum = 0;
	int len = 0;
	for (int i = 0; i < size; ++i)
	{
		// if divisible by 5
		if (array[i]%5 == 0)
		{
			sum += array[i];
			++len;
		}
		
	}
	if (len == 0)
	{
		return 0.0;
	}
	return (sum/len);
}

int sumSquare(float array[], int N)
{
	float sqrsum = 0;
	// get sum
	for (int i = 0; i < N; ++i)
	{
		sqrsum += array[i]*array[i];
	}
	// cout<<sum;
	return sqrsum;
}

int main(int argc, char const *argv[])
{
	float array[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr5[100];
	int N;
	// get average
	float avg = AVG(array, 10);
	cout<<"Average of array : "<<avg<<endl;

	// peinr count of a e i in given string
	occuranceOfAEI("athieinbdeefobnbabhjbei");
  /* initialize random seed: */
  	srand (time(NULL));
  	// generate random no and store it in array
	for (int i = 0; i < 100; ++i)
	{
		arr5[i] = (rand()%71)+6; 
	}
	// get avg of all no which is divisible by 5
	float avg2 = AVG5(arr5, 100);
	cout<<"AVG5 : "<<avg2<<endl;
	// for last part
	cout<<"Enter N : ";
	cin>>N;
	float arr[N];
	for (int i = 0; i < N; ++i)
	{
		cout<<"Enter "<<(i+1)<<" No : ";
		cin>>arr[i];
	}
	// get sqr sum
	float sqrsum = sumSquare(arr, N);
	cout<<"sumSquare : "<<sqrsum<<endl;
	return 0;
}