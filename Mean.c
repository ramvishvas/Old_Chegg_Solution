#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	// nreating 5 variable
	float num1, num2, num3, num4, num5;
	float geoMean;
	float regularMean;
	float scale;
	/* Intializes random number generator */
   	srand(time(0)); 

   	/*between [0, 1.0] */
   	scale = rand() / (float) RAND_MAX; 
    // min + scale * ( max - min )
   	num1 = 1.5 + scale*(9 - 1.5);

   	scale = rand() / (float) RAND_MAX; 
   	num2 = 1.5 + scale*(9 - 1.5);

   	scale = rand() / (float) RAND_MAX; 
   	num3 = 1.5 + scale*(9 - 1.5);

   	scale = rand() / (float) RAND_MAX; 
   	num4 = 1.5 + scale*(9 - 1.5);

   	scale = rand() / (float) RAND_MAX; 
   	num5 = 1.5 + scale*(9 - 1.5);

   	printf("Numbers: %f %f %f %f %f\n",num1, num2, num3, num4, num5);

   	geoMean = pow((num1*num2*num3*num4*num5), 0.2);
   	regularMean = (num1+num2+num3+num4+num5) / 5;

   	printf("\nGeoMean: %f",geoMean);
   	printf("\nRegularMean: %f",regularMean);

   	if (geoMean > regularMean)
   	{
   		printf("\n\nGeoMean is larger\n");
   	}
   	else if(geoMean < regularMean)
   	{
   		printf("\n\nRegularMean is larger\n");
   	}
   	else
   	{
   		printf("\n\nBoth are same\n");
   	}
	return 0;
}
