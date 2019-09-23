// if you have any doubt please let me know
#include<iostream>
#include<math.h>
using namespace std;

int welcomeToPrime(int n){
    //Assumptions:;;;;;;;;;;;;;;;
    // if prime[i] == 0 then i is prime
    // if prime[i] == 1 then i is not prime

    // consider all number from 2 to n are prime
    int prime[n+1]={0}; 

    // generate prime number
    for (int i=2; i<=sqrt(n); i++) {
        if (prime[i] == 0)
        {
            // if the i is prime then multiple of i will not be a prime
            for (int j=2; i*j<= n; j++){
                prime[i*j] = 1; // setting i is not a prime
            }
        }
    }
    // is number prime
   if (prime[n] == 0)
    {
        cout<<"Is "<<n<<" prime Number ? true\n";
    }else{
        cout<<"Is "<<n<<" prime Number ? false\n";
    }

    // printing prime
    int countPrime = 0; // prime count variable
    cout<<"Prime numbers in [1, "<<n<<"] are [";


    for (int i=2, j = 0; i<=n; i++)
    {
        if (prime[i] == 0){
            ++countPrime; // incrimenting prime count
            if (i == 2)
            {
                cout <<i;
            }else{
                cout <<", "<<i ;
            }
        }
    }   
    cout<<"]\n";
    // ....................................
    // largest prime
    cout<<"The largest prime number in [1, "<<n<<"] is ";
    for (int i = n; i >=2; --i)
    {
        if (prime[i] == 0){
            cout <<i<<"\n";
            break;
        }
    }
    //.........................................
    // total number of prime
    cout<<"The number of prime numbers in [1, "<<n<<"] is "<<countPrime<<"\n";

    //random prime
    while(true){
        int isPrime = 2 + (rand() % static_cast<int>(n));
        if (prime[isPrime] == 0){
            cout<<"A random prime in [1, "<<n<<"] is "<<isPrime<<"\n";
            break;
        }
    }
}

int main () 
{
    int n;
    cout<<"Enter a positive integer -> ";
    cin>>n;
    if (n >= 2)
    {
        welcomeToPrime(n);
    }
    
    return 0;
}