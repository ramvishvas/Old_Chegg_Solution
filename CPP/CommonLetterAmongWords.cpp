#include <bits/stdc++.h>
using namespace std;

int threeShared(const char* w1, const char * w2, const char * w3){
	// total number of character is 256;
	int count[256] = {0}; // for first w1
	int twoCount[256] = {0}; // for common character between w1 and w2
	int c = 0; // common chacter counting for all three word
	if (w1 == NULL || w2 == NULL || w3 ==  NULL){
		return 0;
	}
	while(*w1){
		count[*w1] += 1; // increment the value at currosponding index(index is ASCII Value of character)
		*w1++; // go for next character
	}

	while(*w2){
		if(count[*w2] > 0){ //checking is character common between w1 and w2
			// increment the value at currosponding index(index is ASCII Value of character)
			// which is common between w1 and w2
			twoCount[*w2] += 1; 
			count[*w2] -= 1; // decrement the count of currosponding character
		}
		*w2++;
	}

	// similar to 2nd while loop with twoCount array;
	while(*w3){
		if(twoCount[*w3] > 0){
			//printf("%c",*w3);
			++c;
			count[*w3] -= 1;
		}
		*w3++;
	}
	//printf("\n");
	return c;
}

// logic is already explained above
int twoShared(const char* w1, const char * w2){
	int count[256] = {0};
	int c = 0; // counting common
	if (w1 == NULL || w2 == NULL){
		return 0;
	}
	while(*w1){
		count[*w1] += 1;
		*w1++;
	}
	while(*w2){
		if(count[*w2] > 0){
			//printf("%c",*w2);
			++c;
			count[*w2] -= 1;
		}
		*w2++;
	}
	// printf("\n");
	return c;
}

void sort(char a[], int n){
	for (int i = 0; i < n; ++i){
		for (int j = i+1; j < n; ++j){ // find the index if minimum number
			if (a[i] > a[j]){ // if minimum found swap it
				char c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	printf("%c",a[i]);
	// }
	// printf("\n");
}

int main()
{
	string word;
    cout << "Enter 1st word : ";
    getline(cin, word);
    // declaring character array w1
    int l1 = word.length();
    char w1[l1]; 
    // copying the contents of the 
    // string to char array w1
    strcpy(w1, word.c_str()); 

    cout << "Enter 2nd word : ";
    getline(cin, word);
    // declaring character array w2
    int l2 = word.length();
    char w2[l2]; 
    // copying the contents of the 
    // string to char array w1
    strcpy(w2, word.c_str()); 

    cout << "Enter 3rd word : ";
    getline(cin, word);
    // declaring character array w3
    int l3 = word.length();
    char w3[l3]; 
    // copying the contents of the 
    // string to char array w3
    strcpy(w3, word.c_str()); 

    sort(w1,l1);
    sort(w2,l2);
    sort(w3,l3);
    cout<<"\nSorted word is ...\n\n"<<w1<<"\n"<<w2<<"\n"<<w3<<"\n"<<endl;

    cout<<"Common between '"<<w1<<"' and '"<<w2<<"' : "<<twoShared(w1,w2)<<"\n";

	cout<<"Common between '"<<w2<<"' and '"<<w3<<"' : "<<twoShared(w2,w3)<<"\n";

	cout<<"Common between '"<<w1<<"' and '"<<w3<<"' : "<<twoShared(w1,w3)<<"\n";

	cout<<"Common between '"<<w1<<"', '"<<w2<<"' and '"<<w3<<"' : "<<threeShared(w1,w2,w3)<<"\n";
	
	return 0;
}