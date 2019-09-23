#include <stdio.h>
int main(int argc, char const *argv[])
{
	char *p = "ayqm";
	// printf("%d\n",++*(p++));
	int i = 5;
	// printf("%d\n",++i++ );
	for (; i++=0;)
	{
		printf("%d\n",i);
	}
	return 0;
}