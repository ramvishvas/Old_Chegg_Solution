#include <stdio.h> 
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
    float M1[N][N] = {{2.33, 4.53, -98.4 }, 
                      {28.54, -75.62, 3.44}, 
                      {102.33, 3.3, -45.01}};
  
    float M2[N][N] = {{46.73, 43.6, 92.1}, 
                      {-2.233, -116.8, -11.4}, 
                      {156.8, 13.44, 67.8}}; 
  
    float Result[N][N]; // To store result
    multiply(M1, M2, Result); 

    printf("x=  "); print(M1);
    printf("\ny=  "); print(M2);
    printf("\nx*y=  "); print(Result);
    return 0; 
} 