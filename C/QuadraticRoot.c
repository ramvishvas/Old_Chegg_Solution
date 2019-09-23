// to compile :  gcc file.c -o file -lm
// to run : ./file

#include <stdio.h>
#include <math.h>

void findRoot(float a, float b, float c){
	float realPart, imgPart;
	// if a = 0
	if (a == 0){
		printf("Sorry the first coefficient can't be 0!");
		return;
	}
	float D = b*b - 4*a*c; // finding d
	if (D < 0)
	{
		realPart = -b/(2*a); // real part
		imgPart = sqrt(-D)/(2*a);// imaginary part
		// ceil function is used for rounding off purpose
		printf("Your quadratic equation has two complex root: ");
		printf("%.2f + %.2fi and %.2f - %.2fi",ceil(realPart*100)/100.0, ceil(imgPart*100)/100.0, ceil(realPart*100.0)/100.0, ceil(imgPart*100.0)/100.0);
	}
	else if (D > 0)
	{
		printf("Your quadratic equation has two real root: ");
		// I just use the formula of distinct root
		// ceil function is used for rounding off purpose
		printf("%.2f and %.2f",ceil(((-b+sqrt(D))/(2*a))*100)/100.0, ceil(((-b-sqrt(D))/(2*a))*100)/100.0);
	}
	else{ // D == 0
		printf("Your quadratic equation has one real repeated root: ");
		// here I used the formula of equal root which is -b/2a
		// ceil function is used for rounding off purpose
		printf("%.2f",ceil((-b/(2*a))*100)/100.0);
	}
}


int main()
{
	float a, b, c;
	printf("Enter the coefficient a b and c seperated by space: ");
	scanf("%f %f %f",&a,&b,&c);
	// printf("%f %f %f\n",a,b,c);
	
	findRoot(a, b, c);
	printf("\nGoodbye!\n");
	return 0;
}