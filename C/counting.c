#include <stdio.h>
int counting(char *y)
{
	int x = 0;
	while(y != NULL)
	{
		if (*y == '\0')
		{
			return x;
		}
		else if(*y=='!' || *y =='@' || *y =='#' || *y=='$' || *y=='%' || *y=='^' || *y=='&')
		{
			++x;
			++y;
		}
		else if(*y >= '0' && *y <= '9')
		{
			++x;
			++y;
		}
		else
		{
			++y;
		}
	}

}

int main()
{
	char *p = "!@#$%^& If so 123then 845increment x and y";
	int c = counting(p);
	printf("%d\n",c);	
	return 0;
}