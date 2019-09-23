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
// add two matrix
void addition(float SUM[][N], float Result[][N]) 
{ 
    int i, j, k; 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        { 
           SUM[i][j] += Result[i][j];
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
// generate randon number
float randomFloat()
{
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return -199.999 + scale * 2 * 199.999;
}
  
int main() 
{ 
	int i, j;
    float M1[N][N];
    float M2[N][N]; 
    float Result[N][N]; // To store result
    float SUM[N][N] = {0};

    srand((unsigned int)time(NULL));
    // multiply 100 times
    for (int t = 1; t <= 100; ++t)
    {
        // generate random matrix
        for (i = 0; i < N; i++) 
        { 
            for (j = 0; j < N; j++) 
            {
                M1[i][j] = randomFloat();
                M2[i][j] = randomFloat();
            }
        }
        // multiply
        multiply(M1, M2, Result); 
        // add resutl with sum and store it
        addition(SUM, Result);
    }

    // get average
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        {
           SUM[i][j] /= 100; 
        }
    }
    // print avg result
    printf("\nAvg="); print(SUM);
    return 0; 
} 