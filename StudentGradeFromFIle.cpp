#include <iostream>
using namespace std;
const int MAXGRADE = 25; // maximum number of grades per student
const int MAXCHAR = 30;  // maximum characters used in a name

typedef char StringType30[MAXCHAR + 1]; // character array data type used for names
// having 30 characters or less.
typedef float GradeType[MAXGRADE];       // one dimensional integer array data type
// Function Prototypes
float findGradeAvg(GradeType, int);   // finds grade average by taking array of    
// grades and number of grades as parameters
char findLetterGrade(float);        // finds letter grade from average given
// to it as a parameter
int main( void )
{


  return 0;
}

//***********************************************************************

//                              findGradeAvg

// task:           This function finds the average of the

//                                numbers stored in an array.

//

// data in:        an array of integer numbers

// data returned: the average of all numbers in the array

//***********************************************************************

float findGradeAvg(GradeType array, int numgrades)

{

// Fill in the code for this function

}

//***********************************************************************

//                              findLetterGrade

// task:           This function finds the letter grade for the number

//                             passed to it by the calling function

// data in:        a floating point number

// data returned: the grade (based on a 10 point spread) of the number

//                  passed to the function

//***********************************************************************

char findLetterGrade(float numgrade)

{


// Fill in the code for this function

}