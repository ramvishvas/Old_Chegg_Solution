#include<stdio.h>
#include<stdlib.h>
typedef struct DLinkedList {
    int number;
    struct DLinkedList *next;
    struct DLinkedList *prev;
}DLL;

/* A utility function to create a new node */
DLL *newNode(int new_data) {
    /* allocate node */
    DLL* new_node = (DLL*) malloc(sizeof(DLL));
    /* put in the number  */
    new_node->number  = new_data;
    new_node->next =  NULL;
    new_node->prev =  NULL;

    return new_node;
}

/* Function to print linked list */
void print(DLL *head){
	printf("DLinkedList:\t");
    DLL *temp = head;
    DLL *temp2 = head;
    while(temp != NULL){ // check NULL condition
        printf("%d  ", temp->number);
        temp2 = temp;
        temp = temp->next;
    }
    printf("\nReverse DLL:\t");
    while(temp2 != NULL){ // check NULL condition
        printf("%d  ", temp2->number);
        temp2 = temp2->prev;
    }
    printf("\n");
}

/* function to insert a new_node in a list.*/
void insert(DLL** head_ref, DLL* new_node) {
    DLL* current;
    /* Special case for the head end */
    if (*head_ref == NULL) {
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
        new_node->prev = current;
        current->next = new_node;
    }
}

/* this function deletes the first occurrence of key in linked list */
void delete(DLL **head_ref, int key){
    // Store head node
    DLL* temp = *head_ref;
    // Search for the key to be deleted
    while (temp != NULL && temp->number != key) {
        temp = temp->next;
    }
    // If key was not present in linked list
    if (temp != NULL)
    {
        if (temp -> next == NULL && temp -> prev == NULL)
        {
           *head_ref = NULL; 
        }
        else if (temp -> next == NULL)
        {
            temp->prev->next = NULL;
        }
        else if (temp -> prev == NULL)
        {
           *head_ref = temp->next; 
           (*head_ref)->prev = NULL;
        }
        else{
              // Unlink the node from linked list
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
        }
        free(temp);
    } 
    else 
    {
        printf("Given Number Not Found in Linked List\n");
    }
}


/* Drier program to test count function*/
int main()
{
	int n;
    /* Start with the empty list */
    DLL* head = NULL;
    DLL *new_node;
    while(1){
    	printf("\nEnter a Number to insert or -1 to exit: ");
    	scanf("%d",&n);
    	if (n == -1){
    		break;
    	}
    	new_node = newNode(n);
    	insert(&head, new_node);
    	print(head);
    }

    while(1){
    	printf("\nEnter a Number to Delete or -1 to exit: ");
    	scanf("%d",&n);
    	if (n == -1){
    		break;
    	}
    	delete(&head, n);
    	print(head);
    }

    return 0;
}