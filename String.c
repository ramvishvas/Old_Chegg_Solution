#include <stdio.h>
int length(char a[])
{
	int count = 0;
	while(a[0] != '\0')
	{
		++count;
		a = a+1;
	}
	return count;
}
int main()
{
	char arr1[25] = {0};
	char arr2[25] = {0};
	char arr3[100] = {"The quick brown fox jumps over the lazy dog."};
	printf("Length of \"%s\" = %d\n",arr3, length(arr3));
	printf("Enter 1st String : ");
	scanf("%s",arr1);
	printf("Enter 2nd String : ");
	scanf("%s",arr2);

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}