#include <stdio.h>

int main()
{
	// initilization of count, sum, max and weight(input)
	float sum=0, max = 0, weight=0;
	int count=0;

	while(1)
	{
		printf("Enter %d rabbit weight or -1 to exit : ",(count+1));
		scanf("%f",&weight); // getting weight input

		// if input is -1 then exit
		if (weight == -1){
			break;
		}
		// if weight is -ve pr 0 display an error message
		else if(weight <= 0){
			printf("Opps!!! weight can not be Negative or Zero\n");
		}else{
			sum += weight; // sum = sum + weight(new waight)
			count += 1;    // increase rabbit count
			if (max < weight) // to find new maximum waight
			{
				max = weight;
			}
		}
	}
	printf("\n\nAverage weight : %f pounds\n",sum/count);
	printf("Largest weight : %f pounds\n",max);
	printf("Total rabbit is: %d\n",count);
	return 0;
}