#include <stdio.h>
#include <string.h>
int main()
{
	char p[20];
	char* s = "string";
    int len = strlen(s);
    printf("%d\n",len);
    // printf("%c\n",s[len+2]);
    int i;
    for (i = 0; i < len; ++i)
    {
        p[i] = s[len-i];
        printf("%c  %d\n",s[len-i],s[len-i]);
    }
    printf("H%sT\n",p);

    if (s[len] == '\0')
    {
    	printf("Bro Its Null Value\n");
    }
}