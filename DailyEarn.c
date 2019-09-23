#include <stdio.h>
#include <math.h>

void main()
{
	int day;
	// initilize total and first day salary
	double total = 0, daySal = 1; 
	do{
		printf("Enter Number of days : ");
		// get day as input
		scanf("%d",&day);
		// chechvalidity
		if (day < 1)
		{
			printf("Oops!!! invalid, try again\n");
		}
	}while(day < 1);
	// repeate iv day is < 1

	// printibg table
	printf("\nDay\t\tSalary Of Day\n");
	for (int i = 1; i <= day; ++i)
	{
		total += daySal; // updte tutal by adding day salary
		// print day and day salary n dollor by dividing 100
		// 1 dollor = 100 penny 
		printf("%d\t\t%0.2f$\n",i,daySal/100);
		daySal *= 2; // update day with net day salary
	}
	// print total salary in dollor
	printf("\nTotal Salary : %0.2f$\n",total/100);

}