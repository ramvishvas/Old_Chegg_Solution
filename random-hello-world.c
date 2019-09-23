#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 3
  
// This function multiplies matrix and matrix, 
// and stores the result in Result
void multiply(float M1[][N], float M2[][N], float Result[][N]) 
{ 
    int i, j, k; 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        { 
            Result[i][j] = 0; 
            for (k = 0; k < N; k++)
            {
                Result[i][j] += M1[i][k]*M2[k][j];
            }
        } 
    } 
} 

void print(float Matrix[][N])
{
    int i, j;
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        {
           printf("\t%3f", Matrix[i][j]); 
        }
        printf("\n"); 
    } 
}
  
int main() 
{ 
	int i, j;
    float M1[N][N];
    float M2[N][N]; 
    float Result[N][N]; // To store result

    // random matrix generation
    srand((unsigned int)time(NULL));
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        {
           float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
        	M1[i][j] = -199.999 + scale * 2 * 199.999;
        }
    }

    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        {
           float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
        	// min + scale * ( max - min )
        	M2[i][j] = -199.999 + scale * 2 * 199.999;
        }
    }

    multiply(M1, M2, Result); 

    printf("x=  "); print(M1);
    printf("\ny=  "); print(M2);
    printf("\nx*y=  "); print(Result);
    return 0; 
} 