#define _CRT_ECIRUS_NO_NARRINGS 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define WORDSIZE 20

//A function that greets the uses 
void greets()
{
	printf("Welcome, you will enter two words\n");
	printf("and they will be Joined together to form 2 different new words\n");
}

//A function that asks and gets a string from the user 
void getString(char* str)
{
	printf("Enter a word: ");
	scanf("%s",str);
}

int main()
{
	// 4 char array decleration
	char word1[WORDSIZE];
	char word2[WORDSIZE];
	char word3[WORDSIZE];
	char word4[WORDSIZE];

	char again;
	// user greeting
	greets();
	//reset all string with ""
	strcpy(word1, "");
	strcpy(word2, "");
	strcpy(word3, "");
	strcpy(word4, "");

	// printf("%s\n",word1);
	// printf("%s\n",word2);
	// printf("%s\n",word3);
	// printf("%s\n",word4);

	do
	{
		// get two word from user
		getString(word1);
		getString(word2);
		
		// printf("%s\n",word1);
		// printf("%s\n",word2);

		// copy word1 to word3
		strcpy(word3, word1);
		// copy word2 to word4
		strcpy(word4, word2);

		//merge word3 and word2 togather
		strcat(word3, word2);
		//merge word4 and word1 togather
		strcat(word4, word1);

		// print output
		printf("The new word are %s and %s\n",word3, word4);

		// ask for choice
		printf("Would you like to enter 2 new words (Q to quit, anything else to continue): ");
		getchar(); // get newline
		again = getchar(); // get choice

	} while(again != 'q' && again != 'Q');

	//goodbye message
	printf("\nGoodbye!\n\n");
	return 0;
}