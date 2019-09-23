// Driver Code 
#include <stdio.h>
#include <math.h>

void AB2(int A[2][2], int B[2][2], double Result[2][2]) 
{  
  for (int i = 0; i < 2; i++) 
  { 
    for (int j = 0; j < 2; j++) 
    { 
      Result[i][j] = sqrt(A[i][j]) * B[i][j] * B[i][j]; 
    } 
  } 
}

void DivideEbyE(int A[2][2], int B[2][2], float Result[2][2]) 
{  
  for (int i = 0; i < 2; i++) 
  { 
    for (int j = 0; j < 2; j++) 
    { 
      Result[i][j] = (float)B[i][j] / (float)A[i][j]; 
    } 
  } 
}

void Divide(int A[2][2], int B[2][2], float Result[2][2]) 
{  
  float inverse[2][2] = {0};
  //get inverse of A
  float detA = A[0][0]*A[1][1] - A[1][0]*A[0][1];
  // printf("%f\n",detA);
  inverse[0][0] = A[1][1]/detA;
  inverse[1][1] = A[0][0]/detA;
  inverse[0][1] = -(A[0][1]/detA);
  inverse[1][0] = -(A[1][0]/detA);

  for (int i = 0; i < 2; i++) 
  { 
    for (int j = 0; j < 2; j++) 
    { 
      Result[i][j] = 0; 
      // multiplying 
      // 1st row 1st column
      // 2nd row and 2nd column
      for (int k = 0; k < 2; k++)
      {
          Result[i][j] += inverse[i][k] * B[k][j]; 
      }
    } 
  }
  
}

void MultiplyEbyE(int A[2][2], int B[2][2], int Result[2][2]) 
{  
  for (int i = 0; i < 2; i++) 
  { 
    for (int j = 0; j < 2; j++) 
    { 
      Result[i][j] = A[i][j] * B[i][j]; 
    } 
  } 
}

void Multiply(int A[2][2], int B[2][2], int Result[2][2]) 
{  
  for (int i = 0; i < 2; i++) 
  { 
    for (int j = 0; j < 2; j++) 
    { 
      Result[i][j] = 0; 
      // multiplying 
      // 1st row 1st column
      // 2nd row and 2nd column
      for (int k = 0; k < 2; k++)
      {
          Result[i][j] += A[i][k] * B[k][j]; 
      }
    } 
  } 
}

int main() 
{ 
    int C[2][2] = {0};
    int D[2][2] = {0};

    float E[2][2] = {0};
    float F[2][2] = {0};
    
    double G[2][2] = {0};

    int A[2][2] = {{16,  25}, 
                   { 9,   4}}; 
  
    int B[2][2] = {{-7,  8},
                   { 6,  2}}; 
  
    
    // print matrix A
    printf("Matrix A :\n\n");
    for (int i = 0; i < 2; i++) 
    { 
      for (int j = 0; j < 2; j++) 
      {
        printf("%4d\t", A[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");


    // print matrix B
    printf("Matrix B :\n\n");
    for (int i = 0; i < 2; i++) 
    { 
      for (int j = 0; j < 2; j++) 
      {
        printf("%4d\t", B[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");

    // call to multiplyEbtE AxB element by element
    MultiplyEbyE(A, B, C);
    // print matrix C
    printf("Matrix C :\n\n");
    for (int i = 0; i < 2; i++) 
    { 
      for (int j = 0; j < 2; j++) 
      {
        printf("%4d\t", C[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");

    // multiply A and B
    Multiply(A, B, D);
    // print matrix D
    printf("Matrix D :\n\n");
    for (int i = 0; i < 2; i++) 
    { 
      for (int j = 0; j < 2; j++) 
      {
        printf("%4d\t", D[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");

    DivideEbyE(A, B, E);
    // print matrix E
    printf("Matrix E :\n\n");
    for (int i = 0; i < 2; i++) 
    { 
      for (int j = 0; j < 2; j++) 
      {
        printf("%5.2f\t", E[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");
   
    Divide(A, B, F);
    // print matrix E
    printf("Matrix F :\n\n");
    for (int i = 0; i < 2; i++) 
    { 
      for (int j = 0; j < 2; j++) 
      {
        printf("%5.2f\t", F[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");
    
    AB2(A, B, G);
    // print matrix E
    printf("Matrix G :\n\n");
    for (int i = 0; i < 2; i++) 
    { 
      for (int j = 0; j < 2; j++) 
      {
        printf("%5.2f\t", G[i][j]);
      }
      printf("\n"); 
    } 
    printf("\n");
    return 0; 
}