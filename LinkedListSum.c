#include<stdio.h>
#include<stdlib.h>
typedef struct num {
    int number;
    struct num *next;
}LL;

/* A utility function to create a new node */
LL *newNode(int new_data) {
    /* allocate node */
    LL* new_node = (LL*) malloc(sizeof(LL));
    /* put in the number  */
    new_node->number  = new_data;
    new_node->next =  NULL;

    return new_node;
}

/* Function to print linked list */
void print(LL *head){
	printf("LinkedList Is: ");
    LL *temp = head;
    while(temp != NULL){ // check NULL condition
        // if number is not last then print - also
        if (temp->next != NULL)
        {
           printf("%d-", temp->number);
        }
        // else print without -
        else
        {
            printf("%d", temp->number);
        }
        
        temp = temp->next;
    }
    printf("\n");
}

/* function to insert a new_node in a list.*/
void insert(LL** head_ref, LL* new_node) {
    LL* current;
    /* Special case for the head end */
    if (*head_ref == NULL) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else {
        /* Locate the node before the point of insertion */
        current = *head_ref;
        while (current->next != NULL) {
            // add number to each node
            current->number += new_node->number;
            current = current->next;
        }
        // add num to last node
        current->number += new_node->number;
        // add new node
        new_node->next = current->next;
        current->next = new_node;
    }
}

/* Drier program to test count function*/
int main()
{
	int n;
    /* Start with the empty list */
    LL* head = NULL;
    LL *new_node;
    printf("Input Number: ");
    while(1){
    	scanf("%d",&n);
    	if (n == 0){
    		break;
    	}
    	new_node = newNode(n);
    	insert(&head, new_node);
    }
    print(head);
    return 0;
}