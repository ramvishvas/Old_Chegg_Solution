#include <stdio.h>
int main()
{
	float grade;
	printf("Enter Grade/Marks: ");
	scanf("%f",&grade);
	if (grade > 100)
	{
		printf("Grade More Than 100 Not Possible\n");
	}
	else if (grade >= 94)
	{
		printf("Grade Letter Associated with %.2f : A\n",grade);
	}
	else if (grade >= 90)
	{
		printf("Grade Letter Associated with %.2f : A-\n",grade);
	}
	else if (grade >= 87)
	{
		printf("Grade Letter Associated with %.2f : B+\n",grade);
	}
	else if (grade >= 83)
	{
		printf("Grade Letter Associated with %.2f : B\n",grade);
	}
	else if (grade >= 80)
	{
		printf("Grade Letter Associated with %.2f : B-\n",grade);
	}
	else if (grade >= 77)
	{
		printf("Grade Letter Associated with %.2f : C+\n",grade);
	}
	else if (grade >= 73)
	{
		printf("Grade Letter Associated with %.2f : C\n",grade);
	}
	else if (grade >= 70)
	{
		printf("Grade Letter Associated with %.2f : C-\n",grade);
	}
	else if (grade >= 67)
	{
		printf("Grade Letter Associated with %.2f : D+\n",grade);
	}
	else if (grade >= 63)
	{
		printf("Grade Letter Associated with %.2f : D\n",grade);
	}
	else if (grade >= 60)
	{
		printf("Grade Letter Associated with %.2f : D-\n",grade);
	}
	else if (grade < 0)
	{
		printf("Grade Letter Associated with %.2f Not Possible\n",grade);
	}
	else
	{
		printf("Grade More Than %.2f : F\n",grade);
	}
	return 0;
}
/* Assumptions
Percent		Letter Grade
94 - 100	A
90 - 93		A-
87 - 89		B+
83 - 86		B
80 - 82		B-
77 - 79		C+
73 - 76		C
70 - 72		C-
67 - 69		D+
63 - 66		D
60 - 62		D-
< 60		F
*/
