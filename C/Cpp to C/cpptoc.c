#include <iostream>

#include <fstream>

#include <stdlib.h>

using namespace std;

typedef struct mazeStruct

{

  

char arr[32][32]; /* allows for a maze of size 30x30 plus outer walls */

  

int xsize, ysize;

  

int xstart, ystart;

  

int xend, yend;

  

} maze;

void readMaze ( maze & m1 )

{

  

int xpos, ypos;

  

int i,j;

  

ifstream is;

  

cout << "Enter the name of a file to read data: ";

  

char fname2[80];

  

cin >> fname2;

  

is.open (fname2, ios::in);

  

  

  

if ( is.fail() )

  

{

  

//cout << "Error: file \"" << fname << "\" did not open properly." << endl;

  

cerr << "Error: file \"" << fname2 << "\" did not open properly." << endl;

  

exit (-1); // typical "quit program on an error" code

  

}

  

/* read in the size, starting and ending positions in the maze */

  

is >> m1.xsize >> m1.ysize;

  

is >> m1.xstart >> m1.ystart;

  

is >> m1.xend >> m1.yend;

  

/* print them out to verify the input */

  

cout << "size: " << m1.xsize << ", " << m1.ysize << endl;

  

cout << "start: " << m1.xstart << ", " << m1.ystart << endl;

  

cout << "end: " << m1.xend << ", " << m1.yend << endl;

  

/* initialize the maze to empty */

  

for (i = 0; i < m1.xsize+2; i++)

  

for (j = 0; j < m1.ysize+2; j++)

  

m1.arr[i][j] = '.';

  

/* mark the borders of the maze with *'s */

  

for (i=0; i < m1.xsize+2; i++)

  

{

  

m1.arr[i][0] = '*';

  

m1.arr[i][m1.ysize+1] = '*';

  

}

  

for (i=0; i < m1.ysize+2; i++)

  

{

  

m1.arr[0][i] = '*';

  

m1.arr[m1.xsize+1][i] = '*';

  

}

  

/* mark the starting and ending positions in the maze */

  

m1.arr[m1.xstart][m1.ystart] = 's';

  

m1.arr[m1.xend][m1.yend] = 'e';

  

  

  

/* mark the blocked positions in the maze with *'s */

  

is >> xpos >> ypos;

  

while ( ! is.eof() )

  

{

  

m1.arr[xpos][ypos] = '*';

  

is >> xpos >> ypos;

  

}

  

}

int main (int argc, char **argv)

{

  

maze m1;

  

readMaze ( m1 );

  

int xpos, ypos;

  

int i,j;

  

/* print out the initial maze */

  

for (i = 0; i < m1.xsize+2; i++)

  

{

  

for (j = 0; j < m1.ysize+2; j++)

  

printf ("%c", m1.arr[i][j]);

  

printf("\n");

  

}

  

}