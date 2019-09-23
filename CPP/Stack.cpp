// If you have any doubt please let me know
#include<iostream>
#include<string> // for string class 
using namespace std;
// structure to create linked list
typedef struct String 
{
    string val;
    struct String *next;
}Stack;

/* A utility function to create a new node */
Stack *newNode(string new_data) 
{
    /* allocate node */
    Stack* new_node = (Stack*) malloc(sizeof(Stack));
    /* put in the val */
    new_node->val  = new_data;
    new_node->next =  NULL;

    return new_node;
}

/* Function to print linked list */
void Display(Stack *head)
{
    Stack *temp = head;
    if (temp==NULL)
    {
        printf("Stack is Empty\n");
        return;
    }else if (temp->next == NULL)
    {
        cout<<"Stack : "<< temp->val;
        return;
    }
    else{
        Display(head->next);//recursive call with next reference
        cout<<" "<<temp->val;// printing it
        return;
    }
}


/* function to insert a new_node in a list.*/
void Push(Stack** head_ref, Stack* new_node) 
{
    Stack* current;
    // link new node with head
    new_node->next = *head_ref;
    // change the reference of stakt
    *head_ref = new_node;
}

/* this function deletes the first occurrence of key in linked list */
void Pop(Stack **head_ref){
    // Store head node
    Stack* temp = *head_ref;
    // If head node is empty
    if (temp == NULL) 
    {
        cout<<"Stack is Empty\n";
        free(temp);               // free old head
        return;
    }
    *head_ref = temp->next;
    cout<<"Popped->  "<<temp->val<<"\n";
    free(temp);  // Free memory
}

/* Drier program to test count function*/
int main()
{
	int choice;
    string str;
    /* Start with the empty list */
    Stack* head = NULL;// for head
    Stack *new_node;
    cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\n";
    while(1)
    {
        cout<<"Enter your Choice : ";
        scanf("%d",&choice);

        if(choice == 1)
        {
            cout<<"Enter String to Push: ";
            cin>>str;
            // cout<<str;
            new_node = newNode(str);
            Push(&head, new_node);
        }
        else if(choice == 2)
        {
            Pop(&head);
        }
        else if(choice == 3)
        {
            Display(head);
            cout<<"\n";
        }
        else if(choice == 4)
        {
            break;
        }
        else
        {
            cout<<"Opps!!! Invalid Choice\n"<< flush;
        }
    }
    return 0;
}