#include <iostream>
#include<string>
using namespace std;
typedef struct Node { 
   string name; 
   struct Node *prev; 
   struct Node *next; 
}DLL;

/* A utility function to create a new node */
DLL *newNode(string name) {
    /* allocate node */
    DLL* new_node = (DLL*) malloc(sizeof(DLL));
    /* put in the number  */
    new_node->name  = name;
    new_node->next =  NULL;
    new_node->prev = NULL;

    return new_node;
}