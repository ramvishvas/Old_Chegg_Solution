#include <stdio.h>
#include <string.h>
#define NUM_STRINGS 5
#define STRING_LENGTH 20

void reverseStrings(char *str)
{
	char temp;
	int i, j = 0;
	i = 0;
	j = strlen(str) - 1;
	while (i < j) 
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
void encryptStrings(char strings[NUM_STRINGS][STRING_LENGTH], int key)
{
	char *p = &strings[0][0];
	char *temp; // temp pointer
	for (int i = 0; i < NUM_STRINGS; ++i)
	{
		reverseStrings(p);
		// printf("%s\n", p);
		temp = p;
		while(*temp != '\0')
		{
			*temp += key;
			++temp;
		}
		// printf("%s\n", p);
		// go for next string
		p += STRING_LENGTH;
	}

}

void decryptStrings(char strings[NUM_STRINGS][STRING_LENGTH], int key)
{
	char *p = &strings[0][0];
	char *temp; // temp pointer
	for (int i = 0; i < NUM_STRINGS; ++i)
	{
		temp = p;
		while(*temp != '\0')
		{
			*temp -= key;
			++temp;
		}
		reverseStrings(p);
		p += STRING_LENGTH;
	}

}

void printString(char strings[NUM_STRINGS][STRING_LENGTH])
{
	int i;
	for (int i = 0; i < NUM_STRINGS; ++i)
	{
		printf("%s\n", *(strings+i));
	}
}
int main()
{
	char strings[NUM_STRINGS][STRING_LENGTH]={
                   "tree house",
                   "hello",
                   "big hat",
                   "I am Awesome",
                   "c programming"
                 };
    int key = 2;
    printf("...................Original String................\n");
    printString(strings);

    encryptStrings(strings, key);
    printf("\n.................After encryption...............\n");
    printString(strings);

    decryptStrings(strings, key);
    printf("\n.................After decryption...............\n");
    printString(strings);
	
	return 0;
}