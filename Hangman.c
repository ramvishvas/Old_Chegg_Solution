#include <stdio.h>
#include<stdlib.h>
#define N 5// this is for length for word
void main()
{
	// store your word in to character arry
	char word[N] = {'H', 'E', 'L', 'L', 'O'};
	// this char array will store correct guess
	char guess[N] = {'*', '*', '*', '*', '*'};
	// to count correct guess
	int countGuess = 0, i = 0;
	char ch;// to store guess character
	while(countGuess < N)
	{
		printf("Input a character>");
		scanf(" %c",&ch);
		getchar(); //get newline
		i = 0;
		//  check is guehh matching
		while(i < N)
		{	// if matched increment guesscount and update guess array
			if (word[i] == ch)
			{
				guess[i] = ch;
				++countGuess;
			}
			i++;//  increment i
		}
		// if guessed all
		if (countGuess == N)
		{
			printf("%s\nYOU WIN\n",guess);
			return;
		}
		printf("OGUESS AGAIN\n%s\n",guess);
	}
}