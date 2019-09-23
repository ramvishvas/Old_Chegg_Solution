
// C++ code to demonstrate the working of remove() 
// remove_if() 
  
#include<iostream> 
#include<list> // for list operations 
using namespace std; 

int main() 
{ 
    
    // initializing list of integers 
    list<int> list1={10,14,20,22,30,33,22};   
    // printing original list 
    cout << "The original list is : "; 
    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++) 
       cout << *i << " "; 
       
    cout << endl; 
      
    // using remove() to delete all occurrences of 22 
    list1.remove(22); 
      
    // list after deleting all 22 occurrences 
    cout << "The list after deleting all 22 occurrences : "; 
    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++) 
       cout << *i << " "; 
       
    cout << endl;
      
} 