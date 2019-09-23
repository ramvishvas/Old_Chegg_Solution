#include <stdio.h>
#include <stdlib.h>

void calcEfficiency(FILE* f){
	float p, m, n, g;

	printf("Efficiency \t Money\n");
	// reading n, m and g from file line by line
    while (fscanf(f, "%f %f %f", &n,&m,&g) == 3) {
    	p = (m*n)/g; // calculating efficiency
    	if (p >= 25.0) { // checking efficiency >= 25.0
    		printf("%.1f \t\t %.2f\n",p,(m*0.08));
    	}else{ // if efficiency < 25.0 then no reward
    		printf("%.1f \t\t %.2f\n",p,0.0);
    	}
    }
}

int main()
{
	FILE *fp;
    
    /*  open the file for reading */
    fp = fopen("calcEfficiency.txt", "r");
    // if file not opened
    if (fp == NULL) {
        printf("can not open file or file not exists \n");
        exit(0);
    }
    // calling calcEfficiency function
    calcEfficiency(fp);
    fclose(fp); // closing file
	
	return 0;
}
