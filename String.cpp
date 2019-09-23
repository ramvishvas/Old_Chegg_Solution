#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	string n = "We are in the same City and it is small city";
	// cout<<n.substr(7,15)<<endl;
	cout<<n.substr(7,15).find("same")<<endl;

	string n1 = "small";
	cout<<n.substr(7,35)<<endl;
	cout<<n.substr(7,35).find(n1.substr(1,5))<<endl;
	
	cout<<n.length()<<endl;
	return 0;
}