#include <stdio.h>
int gcd(int number1, int number2);
int gcd(int number1, int number2) {
    int result;
    for(int i = 1; i <= number1 && i <= number2; ++i)
	{
	    // Checks if i is factor of both integers
	    if(number1%i == 0 && number2%i == 0)
	    {
	        result = i;
	    }
	}
    return(result);
}
int main(void) {
	int number1, number2, gcdc, lcm;
    /* Accept numbers, validate them to be positive numbers */
    /* Otherwise keep accepting numbers until they are both positive using a while loop */
    while(1)
    {
    	printf("Please enter 2 positive integers: ");
	    scanf("%d %d",&number1, &number2);
	    printf("You entered: %d and %d\n",number1, number2);
	    if (number1 <= 0 || number2 <= 0)
	    {
	    	printf("Oops... You have entered negative integer\n\n");
	    }
	    else
	    {
	    	break;
	    }
    }
    /* If both are positive, call the gcd function to get the result and print */
    gcdc = gcd(number1, number2);
    lcm = (number1*number2) / gcdc;
    printf("GCD of %d and %d id %d\n",number1, number2, gcdc);
    printf("LCM of %d and %d id %d\n",number1, number2, lcm);
    return(0);
}