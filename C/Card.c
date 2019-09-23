#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SUITS 4
#define FACES 13
#define CARDS 52
//prototypes
void Shuffle_And_Deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]); //shuffling modif
//dealing doesn't mod the arrays
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]); 
int main(void)
{
	// initialize deck array
	unsigned int deck[SUITS][FACES] = {0};
	//initialize suit array
	const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	//initialize face array
	const char *face[FACES] = {"Ace", "Duece", "Three", "Four", "Five", "Six", 
	"Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

	srand(time(NULL)); // seed RNG
	Shuffle_And_Deal(deck, face, suit); // shuffle the deck and deal

	printf("\n.............this is your deal function output............\n\n");
	deal(deck, face, suit); //deal the deck
}
//shuffle cards in deck
void Shuffle_And_Deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[])
{
	//FOR EACH OF THE CARDS, CHOOSE SLOT OF DECK RANDOMLY
	for (size_t card = 1; card <= CARDS; ++card) 
	{
		size_t row; // row number
		size_t column; //column number
		//choose new random location until unoccupied slot found
		do {
			row = rand() % SUITS;
			column = rand() % FACES;
		} while(wDeck[row][column] != 0);
		//place card number in chosen slot of deck
		wDeck[row][column] = card;
		// this is dealing of cards ->> you are doing same thing in deal function
		// for verification please check output
		printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t'); 
	}
}
//deal cards in deck
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[])
{
	// deal each of the cards
	for (size_t card = 1; card <= CARDS; ++card) 
	{
		//loop through rows of wDeck
		for (size_t row = 0; row < SUITS; ++row) 
		{
			//loop through columns of wDeck for current row
			for (size_t column = 0; column <FACES; ++column) 
			{
				//if slot contains current card, display card
				if (wDeck[row][column] == card)
				{
					printf("%5s of %-8s%c", wFace[column], wSuit[row],
					card % 2 == 0 ? '\n' : '\t'); // 2 column format
				}
			}
		}
	}
}