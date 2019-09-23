//System Libraries Here
#include <iostream>//cin,cout,getline()
#include <cstring> //strlen()
using namespace std;

int srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(const char [],const char [],int []);//Search for all occurrences
void print(const char []);//Print the character arrays
void print(const int []); //Print the array of indexes where the pattern found

int srch1(const char s[],const char p[],int n)
{
	int i = n; // initial i is matching index
	while(s[i] && p[i-n])
	{
		// if not matching return 0
		if (s[i] != p[i-n])
		{
			return 0; // not match
		}
		i++;
	}
	// return 1 for matched
	return 1; // match
}


void srchAll(const char s[],const char p[],int arr[])
{
	// cout<<"''";
	int i = 0, index;
	while(s[i])
	{
		// cout<<s[i++];
		if (s[i] == p[0])
		{
			if (srch1(s, p, i))
			{
				arr[i] = 1; // set matched found
			}
		}
		i++;
	}
	// cout<<"''";
}

void print(const char s[])
{
	// print text
	cout<<s<<endl;
}

void print(const int arr[])
{
	int SIZE = 81; // initilization
	int flag = 1; // set flag for None
	for (int i = 0; i < SIZE; ++i)
	{ 
		// if index is 1 print that index
		if (arr[i] == 1)
		{
			// print index
			cout<<i<<endl;
			flag = 0; // reset flag no need to print None
		}
	}
	// printing None if needed
	if(flag)
	{
		cout<<"None"<<endl;
	}
}

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare all Variables Here
const int LINE=81; //Size of sentence or pattern to find
char sntnce[LINE],pattern[LINE]; //80 + null terminator
int match[LINE]; //Index array where pattern was found
  
//Input a sentence and a pattern to match
cout<<"Match a pattern in a sentence."<<endl;
cout<<"Input a sentence"<<endl;
cin.getline(sntnce,LINE);
cout<<"Input a pattern."<<endl;
cin.getline(pattern,LINE);
  
//Search for the pattern
//Input the sentence and pattern, Output the matching positions
//Remember, indexing starts at 0 for arrays.
srchAll(sntnce,pattern,match);
  
//Display the inputs and the Outputs
cout<<endl<<"The sentence and the pattern"<<endl;
print(sntnce);
print(pattern);
cout<<"The positions where the pattern matched"<<endl;
print(match);
  
//Exit
return 0;
}


