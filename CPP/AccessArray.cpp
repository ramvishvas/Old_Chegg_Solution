#include <iostream>
using namespace std;

const int n = 5;
const int r = 5;
const int c = 5;
// this function will return address array
int **getAddress(int (*a)[r][c])
{
    // arrayAddress will store the address of each elements of array
    static int *addrArray[n*r*c];
    int i, j, k, count = 0;
    // iterate through array a and assign address o each elements to addrArray
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < r; ++j)
        {
            for (k = 0; k < c; ++k)
            {
                addrArray[count++] =  &a[i][j][k];
            }
        }
    }
    // return address array
    return addrArray;
}
int main(int argc, char const *argv[])
{
    int i;
	int arr[][r][c] = { 
	                       { {1, 2, 3, 4, 5}, 
	                         {1, 2, 3, 4, 5}, 
	                         {1, 2, 3, 4, 5},
                             {1, 2, 3, 4, 5},
                             {1, 2, 3, 4, 5} 
	                       },
	                       { {1, 2, 3, 4, 5}, 
                             {1, 2, 3, 4, 5}, 
                             {1, 2, 3, 4, 5},
                             {1, 2, 3, 4, 5},
                             {1, 2, 3, 4, 5} 
                           },
                           { {1, 2, 3, 4, 5}, 
                             {1, 2, 3, 4, 5}, 
                             {1, 2, 3, 4, 5},
                             {1, 2, 3, 4, 5},
                             {1, 2, 3, 4, 5} 
                           },
                           { {1, 2, 3, 4, 5}, 
                             {1, 2, 3, 4, 5}, 
                             {1, 2, 3, 4, 5},
                             {1, 2, 3, 4, 5},
                             {1, 2, 3, 4, 5} 
                           },
                           { {1, 2, 3, 4, 5}, 
                             {1, 2, 3, 4, 5}, 
                             {1, 2, 3, 4, 5},
                             {1, 2, 3, 4, 5},
                             {1, 2, 3, 4, 5} 
                           } 
                     	};
    int **ptr = getAddress(arr);
    // print element and address
    for (i = 0; i < n*r*c; ++i)
    {
        cout<<**(ptr + i)<<"\t"<<ptr[i]<<"\n"; 
    }
    cout<<endl;
	return 0;
}