#include <stdio.h>
void abc(int x, int y){
	printf("x:%d  y:%d\n",x,y);
}
int main()
{
    int a, b;
    a = 10;
    b = 10;
    abc(++a, a++);
    printf("a:%d\n\n", a);

    abc(b++, ++b);
    printf("b:%d\n\n", b);
}