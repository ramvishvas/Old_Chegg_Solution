#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class TheMatrix;
// Function Prototype Section
TheMatrix  operator/ (const TheMatrix& M1, const TheMatrix& M2);
TheMatrix  operator- (const TheMatrix& M1, const TheMatrix& M2);
TheMatrix  operator+ (const TheMatrix& M1, const TheMatrix& M2);
TheMatrix  operator* (const TheMatrix& M1, const TheMatrix& M2);
ifstream&   operator>> (ifstream& is, TheMatrix& myMatrix);
ostream&   operator<< (ostream& is, const TheMatrix& myMatrix);
// End of prototype section
class TheMatrix
{
      // MAKE ALL THE FUNCTIONS DEFINED IN THE PROTOTYPE SECTION
      // ABOVE TO BE FRIEND OF THIS CLASS
      public:
            int M[5][5];    // 5 by 5 matrix of integer
            TheMatrix();
            ~TheMatrix();

            friend TheMatrix  operator/ (const TheMatrix& M1, const TheMatrix& M2);
            friend TheMatrix  operator- (const TheMatrix& M1, const TheMatrix& M2);
            friend TheMatrix  operator+ (const TheMatrix& M1, const TheMatrix& M2);
            friend TheMatrix  operator* (const TheMatrix& M1, const TheMatrix& M2);
            friend ifstream&   operator>> (ifstream& is, TheMatrix& myMatrix);
            friend ostream&   operator<< (ostream& is, const TheMatrix& myMatrix);
};

//------------------------------------------

// Deconstructor
TheMatrix::~TheMatrix()
{

}

//------------------------------------------
//Default Constructor
TheMatrix::TheMatrix()
{
      for (int i=0; i< 5; i++)
      {
            for (int j=0; j<5; j++)
            {
                  M[i][j]=0;
            }
      }

}

//------------------------------------------

// This routine asks the user to enter a file name and grab the

// data from there to place it into a matrix

// the matrix filled up with the data is returned

ifstream& operator>> (ifstream& is, TheMatrix& myMatrix)
{
      string fileName;

      cout << "Enter a file name -> ";

      cin >> fileName;

      is.open(fileName.data());

      for (int i=0; i< 5; i++)
      {
            for (int j=0; j<5; j++)
            {
                  is >> myMatrix.M[i][j];
            }
      }

      return is;

}

//------------------------------------------

// Implement this routine to print the matrix to

// the output stream (in this case screen).

// Print in a form of 5 rows by 5 columns  

ostream& operator<< (ostream& os, const TheMatrix& myMatrix)             
{

}

//------------------------------------------

// This routine adds two matrices and creating a new matrix

// of the addition of the two matrices M1 and M2

TheMatrix operator+ (const TheMatrix& M1, const TheMatrix& M2)
{
      TheMatrix Result;
      
      for (int i=0; i< 5; i++)
      {
            for (int j=0; j<5; j++)
            {
                  Result.M[i][j] = M1.M[i][j]+M2.M[i][j];
            }
      }

      return(Result);
}

//------------------------------------------

// Implement the following routine to subtract two Matrices

TheMatrix  operator- (const TheMatrix& M1, const TheMatrix& M2)

{

}

//------------------------------------------

// Implement the following routine to multiply two matrices

TheMatrix  operator* (const TheMatrix& M1, const TheMatrix& M2)

{

}

//------------------------------------------

// Implement the following routine to divide two matrices

// set the result value to zero if the division by zero occurs

TheMatrix  operator/ (const TheMatrix& M1, const TheMatrix& M2)

{

}

//------------------------------------------

int main()
{

      TheMatrix A, B, AddAB, MulAB, SubAB, DivAB;

      ifstream fin1, fin2;

      fin1 >> A;  // This code calls the function operator>> to grab information from a file and place it into Matrix A  

      fin2 >> B;  // This code calls the function operator>> to grab information from a file and place it into Matrix B  



      // call a function to operator+  to add Matrix A and B together and place the result into Matrix AddAB

      // call a function to operator-  to subtract Matrix A from Matrix B  and place the result into Matrix SubAB

      // call a function to operator*  to multiply Matrix A and B together and place the result into Matrix MulAB

      // call a function to operator+  to divide Matrix A by matrix B and place the result into Matrix DivAB

      

      // call the function operator<< to print matrix A

      // call the function operator<< to print matrix B

      // call the function operator<< to print matrix AddAB

      // call the function operator<< to print matrix SubAB

      // call the function operator<< to print matrix MulAB

      // call the function operator<< to print matrix DivAB

      

      return 0;

}

