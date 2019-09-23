#include <stdio.h>
void abc(char* s){
	if(s[0] == '\0') return;
	abc(s+1);
	abc(s+1);
	printf("%c ",s[0]);
}
int main()
{
	char s[] = {'1', '2', '3', '\0'};
	// char t[] = {'1', '2', '3'};
	
	// abc(s);
	// printf("\n");

	// abc(t);
	// printf("\n");

    abc("1");
    printf("\n");

    abc("12");
    printf("\n");

    abc("123");
    printf("\n");

    abc("1234");
    printf("\n");

    abc("12345");
    printf("\n");

    abc("123456");
    printf("\n");

    abc("1234567");
    printf("\n");

}