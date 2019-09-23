#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{	// creating array of 4 number
	float array[4] = {0}, num, value;
	// input checking
	int i = 0;
	// opening file in read mode for input
	FILE *ifp = fopen("data.txt", "r");
	// opening file in write mode for uotput
	FILE *ofp = fopen("output1.txt", "w");

	// file open error handling
	if (ifp == NULL || ofp == NULL){
		printf("Can't open input file\n");
		exit(1);
	}
	// wriye for column name
	fprintf(ofp,"%s\t%s\n", "Sign", "Value");
	// reading number from file
	while(!feof(ifp))
	{  
      	fscanf(ifp, "%f", &num);
      	// printf("%f\n",num);
      	array[i] = num;
      	if (i == 3)
		{
			// get value according to equestion
			value = array[0]+array[1]+array[2]-array[3];
			if (value >= 0)
			{
				// write to output file
				fprintf(ofp,"1\t\t%f\n", value);
			}
			else
			{
				// write to output file
				fprintf(ofp,"0\t\t%f\n", (-value));
			}
			printf("%f\n",value);
			i = 0;
			continue;
		}  
		++i; // incrementing index/count  
    }
	fclose(ifp);
	fclose(ofp);
}