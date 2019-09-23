#include <iostream>
using namespace std;

typedef struct listrec 
{
    int value;
    struct listrec *next;
}listrec;

/* A utility function to create a new node */
listrec *newNode(int new_data) {
    /* allocate node */
    listrec* new_node = (listrec*) malloc(sizeof(listrec));
    /* put in the value  */
    new_node->value  = new_data;
    new_node->next =  NULL;

    return new_node;
}

/* Function to print linked list */
void print(listrec *head){
    listrec *temp = head;
    while(temp != NULL){ // check NULL condition
        cout<<temp->value<<" -> ";
        temp = temp->next;
    }
    cout<<" NULL\n"<<endl;
}

/* function to insert a new_node in a list.*/
void insert(listrec** head_ref, listrec* new_node) {
    listrec* current;
    /* Special case for the head end */
    if (*head_ref == NULL) {
        new_node->next = *head_ref;

        *head_ref = new_node;
    }
    else {
        /* Locate the node before the point of insertion */
        current = *head_ref;
        while (current->next != NULL) {
            current = current->next;
        }
        // insert new node at corret position
        new_node->next = current->next;
        current->next = new_node;
    }
}

int listsum(listrec *head)
{
    int sum = 0;
    listrec *temp = head;
    // check NULL condition and increment sum
    while(temp != NULL)
    {   
        // add value
        sum += temp->value;
        temp = temp->next;
    }
    return sum;
}
// return sum of list
int listsize(listrec *head)
{
    int count = 0;
    listrec *temp = head;
    // check NULL condition and increment count
    while(temp != NULL)
    {   
        temp = temp->next;
        ++count; // increment count
    }
    return count;
}

/* Drier program to test count function*/
int main()
{
	int n;
    /* Start with the empty list */
    listrec* head = NULL;
    listrec *new_node;

    cout<<"Size of list : "<<listsize(head)<<endl;
    cout<<"Sum of list  : "<<listsum(head)<<endl;

    while(1)
    {
    	cout<<"Enter a value to insert or -1 to exit: ";
    	cin>>n;
    	if (n == -1){
    		break;
    	}
    	new_node = newNode(n);

    	insert(&head, new_node);
    	print(head);
    }

    cout<<"\nSize of list : "<<listsize(head)<<endl;
    cout<<"Sum of list  : "<<listsum(head)<<endl;
    return 0;
}