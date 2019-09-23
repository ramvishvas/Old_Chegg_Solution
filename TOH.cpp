#include<iostream>

#include<cstdlib>

using namespace std;

template <typename T>

//stack class

class Stack
{

public:

T **st; //stack variable

int max_size; //to store the max size of stack

int top; //which points to current element in stack

int current; //variable to store current size


Stack(int size)
{
max_size =size;
st = new T *[max_size]; // Array
top =-1;
current = 0;
}

void push(T *a)
{
if(top+1 < max_size)//checking overflow
{
st[top+1] = a;//assigning pointer
top++;
current++;
}
}


T* pop()
{
if(current !=0)//checking underflow
{
current--;
top--;
return st[top+1];//returning pointer without freeing space
}
}


int length()
{
return current;
}


void empty()
{
while(top>-1)
{
delete st[top];
top--;
current--;
}

}

};

int main()
{
// YOUR CODE HERE
// YOUR CODE HERE
// YOUR CODE HERE
return 0;

}