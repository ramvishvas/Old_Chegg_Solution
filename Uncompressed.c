#include <stdio.h>
#include <stdlib.h>
void appendText(int n, char c)
{
    /*  open the file for appending */
    FILE *fp = fopen("quote1.txt", "a");

    // if file not opened
    if (fp == NULL) 
    { 
        printf("can not open file quote1.txt \n");
        exit(0);
    } 
    // excute loop for n times and write the character into file
    for (int i = 1; i <= n; ++i)
    {
        fputc (c, fp);
    }
    fclose(fp);
}
int main()
{
    FILE *fp; 
    char c, d; 
    int n;

    /*  open the file for reading */
    fp = fopen("quote1_compressed.txt", "r");

    // if file not opened
    if (fp == NULL) {
        printf("can not open input file or file not exists \n");
        exit(0);
    }

    // get single character and iterate through entire file
    while ((c = fgetc(fp)) != EOF) 
    {   
        //get second character and check condition
        if ((d = fgetc(fp)) == EOF)
        {
            exit(0);
        }
        // printf("%c  %c\n",c,d);
        n = c -'0'; // convert character to number
        // call function appendText
        appendText(n, d);
    }
    fclose(fp);
    return 0;
}
