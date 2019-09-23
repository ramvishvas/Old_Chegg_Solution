#include <string.h>
#include <stdio.h>

void p(char *s, char *t){
	unsigned int c = 0;
	unsigned int len;
	len = strlen(s) - strlen(t);
	printf("%d\n\n",len);

	len = ((strlen(s) - strlen(t)) > 0? strlen(s):strlen(t));
	printf("%d\n",len);
}

int main(void){
	unsigned int a = 3;
	unsigned int b = 5;
	char *x = "abc";
	char *y = "pqrst";
	// printf("%d\n",a-b);
	// printf("%d\n",strlen(x)-strlen(y));
	p(x,y);
}