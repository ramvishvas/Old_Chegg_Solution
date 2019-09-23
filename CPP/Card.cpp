#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
enum Suit{Spades, Hearts, Diamonds, Clubs};
class Card{
private:
int number;
Suit suit;
string description;
public:
void setNumber(int n);
void setSuit(Suit s);
void setDescription();
string getDescription();
bool operator<(const Card &c);
};
void Card::setNumber(int n) {
number = n;
}
void Card::setSuit(Suit s) {
switch (s) {
case Spades: suit = Spades;
break;
case Hearts: suit = Hearts;
break;
case Diamonds: suit = Diamonds;
break;
case Clubs: suit = Clubs;
break;
}
}
void Card::setDescription() {
switch (suit) {
case Spades:
description = "Spades ";
break;
case Hearts:
description = "Hearts ";
break;
case Diamonds:
description = "Diamonds ";
break;
case Clubs:
description = "Clubs ";
break;
}
switch (number) {
case 1:
description += "Ace";
break;
case 2:
description += "2";
break;
case 3:
description += "3";
break;
case 4:
description += "4";
break;
case 5:
description += "5";
break;
case 6:
description += "6";
break;
case 7:
description += "7";
break;
case 8:
description += "8";
break;
case 9:
description += "9";
break;
case 10:
description += "10";
break;
case 11:
description += "Jack";
break;
case 12:
description += "Queen";
break;
case 13:
description += " King";
break;
}
}
string Card::getDescription() {
return description;
}
class Deck: public Card
{
private:
Card deck[52];
public:
Deck()
{ }
void shuffle(Card arr[52]){
int temp;
Card d;
for ( int i = 0; i < 52; i++){
temp = i + (rand() % (52-i));
deck[i] = arr[i];
arr[i] = arr[temp];
arr[temp] = deck[i];
}
}
};
int main() {
ofstream myFile("card.txt");
string temp;
const int size = 52;
Deck deck;
Card card[size];
int s = 0, n = 0;
for (int i = 0; i < size; i++) {
if (s > 3) {
s = 0;
}
if (n > 13) {
n = 0;
}
card[i].setNumber(n++);
card[i].setSuit(Suit(s++));
card[i].setDescription();
temp = card[i].getDescription();
myFile << left << setw(20) << temp<< endl;
}
myFile.close();
ifstream inputFile("card.txt");
for(int i = 0; i < size; i++){
string temp;
inputFile >> temp;
cout << temp;
}
return 0;
}

