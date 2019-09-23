#include<iostream> // required header file for input/output

using namespace std;

// prototypes you must use for this assignment

void input_data(long data[], short size);

void display_data (long data[], short size);

short countOfFrequency (long data[], short size, long FreqNumbers[ ], short Frequency);

int main()

{   // declare local variables

    long data[10000], FreqNumbers[10000];

    short dsize, Fsize, Frequency; // list may not be complete

    // display a message to the user about the number of values to store in the array

    cin>>dsize;

    while (dsize > 0) //pretest loop - will execute while size > 0

    {

       // output a message to enter the values to be processed

       // call the input_data function

       // print a message about the number of values stored in the array

       // call the display_data function

       // print a message to the user that program will count the number of values which occurred in the array for a

       //      frequency of their choice; ask use to enter a frequency of their choice.

       cin>> Frequency;

       while (Frequency > 0) // loop to check more than 1 frequency but only 1 at a time

       {

         // call countOfFrequency function

         // display a message about the number of values in the FreqNumbers array which occurred exactly Frequency times

         // call the display_data function to print the values stored in the FreqNumbers array

         //        this function should not be called if no values occurred with the required frequency

         // print a message to user that program will count the number of values which occurred in the array for a frequency

         //             of their choice; ask user to enter a frequency of their choice or 0 to terminate the loop.

           cin>>Frequency;

       }// end of inner while loop

       cout<<"To run the program again, enter the number of values to store in the array or 0 to terminate the program ";

       cin>>dsize;

    }// end of outer while loop

    // pause the program to see the results

    //system("pause"); // this is a windows command; will not work in another operating system

   // return 0;       // optional statement, may be required for .NET compiler

}

//function definitions are placed after main

// Function to display the data in the array

// print all values on the same line with one space between each number

void display_data(long data[], short size)

{   /*code in function*/ }

// Do not output anything in the functions below

// Function to input(store) data into the array

void input_data(long data[], short size)

{   /*code in function*/}

//Function to return the count of the number of values which occurred exactly Frequency times

// store in the FreqNumbers array the actual values which occurred with a specific frequency

// Look at the last example above, you would store the values of 10 and 11 if the requested frequency was 5.

// If the requested frequency was 1 you would store a 3 in the FreqNumbers array.

short countOfFrequency (long data[], short dsize, long FreqNumbers[ ], short Frequency)

{   /*code in function*/}

