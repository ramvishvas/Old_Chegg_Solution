// Driver Code 
#include <stdio.h>

void Multiply(int matA[3][3], int matB[3][3], int Result[3][3]) 
{ 
  int i, j, k; 
  for (i = 0; i < 3; i++) 
  { 
    for (j = 0; j < 3; j++) 
    { 
      Result[i][j] = 0; 
      // multiplying 
      // 1st row 1st column
      // 2nd row and 2nd column
      // 3rd row and 3rd column
      for (k = 0; k < 3; k++)
      {
          Result[i][j] += matA[i][k] * matB[k][j]; 
      }
    } 
  } 
}

int main() 
{ 
    int i, j, N = 3; 
    int AxB[3][3] = {0};
    int BxA[3][3] = {0};

    int matA[3][3] = {{1, -1,  1}, 
                      {0,  1,  0}, 
                      {2,  0,  3}}; 
  
    int matB[3][3] = {{ 3,  3, -1}, 
                      { 0,  1,  0},
                      {-2, -2,  1}}; 
  
    
    // print matrix A
    printf("Matrix A :\n");
    for (i = 0; i < N; i++) 
    { 
      for (j = 0; j < N; j++) 
      {
        printf("%3d\t", matA[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");


    // print matrix B
    printf("Matrix B :\n");
    for (i = 0; i < N; i++) 
    { 
      for (j = 0; j < N; j++) 
      {
        printf("%3d\t", matB[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");

    // call to multiply AxB
    Multiply(matA, matB, AxB);

    // print matrix AxB
    printf("Matrix AxB :\n");
    for (i = 0; i < N; i++) 
    { 
      for (j = 0; j < N; j++) 
      {
        printf("%3d\t", AxB[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");
    // call to multiply BxA
    Multiply(matB, matA, BxA);

    // print matrix BxA
    printf("Matrix BxA :\n");
    for (i = 0; i < N; i++) 
    { 
      for (j = 0; j < N; j++) 
      {
        printf("%3d\t", BxA[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");

    return 0; 
}