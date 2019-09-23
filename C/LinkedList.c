#include<stdio.h>
#include<stdlib.h>
typedef struct num {
    int number;
    struct num *next;
}num_str;


void search(num_str **head_ref, int key){
    num_str* temp = *head_ref;
    int count = 0;
    // Search for the key and increase the count position
    while (temp != NULL && temp->number != key) {
        temp = temp->next;
        ++count;
    }
    // If key was not present in linked list
    if (temp == NULL){
        printf("Given Number Not Found in Linked List\n");
        return;
    } else{ // if key present
        printf("Given Number Found at Position : %d\n",count+1);
        return;
    }

}

/* A utility function to create a new node */
num_str *newNode(int new_data) {
    /* allocate node */
    num_str* new_node = (num_str*) malloc(sizeof(num_str));
    /* put in the number  */
    new_node->number  = new_data;
    new_node->next =  NULL;

    return new_node;
}

/* Function to print linked list */
void print(num_str *head){
	printf("Linked List Is\n");
    num_str *temp = head;
    while(temp != NULL){ // check NULL condition
        printf("%d  ", temp->number);
        temp = temp->next;
    }
    printf("\n");
}

/* function to insert a new_node in a list.*/
void insert(num_str** head_ref, num_str* new_node) {
    num_str* current;
    /* Special case for the head end */
    if (*head_ref == NULL || (*head_ref)->number >= new_node->number) {
        new_node->next = *head_ref;

        *head_ref = new_node;
    }
    else {
        /* Locate the node before the point of insertion */
        current = *head_ref;
        while (current->next!=NULL && current->next->number < new_node->number) {
            current = current->next;
        }
        // insert new node at corret position
        new_node->next = current->next;
        current->next = new_node;
    }
}

/* this function deletes the first occurrence of key in linked list */
void delete(num_str **head_ref, int key){
    // Store head node
    num_str* temp = *head_ref, *prev;
    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->number == key) {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->number != key) {
        prev = temp;
        temp = temp->next;
    }
    // If key was not present in linked list
    if (temp == NULL){
    	printf("Given Number Not Found in Linked List\n");
    	return;
    } 
    
    // Unlink the node from linked list
    prev->next = temp->next;
    free(temp);  // Free memory
}


/* Drier program to test count function*/
int main()
{
	int n;
    /* Start with the empty list */
    num_str* head = NULL;
    num_str *new_node;
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

    while(1){
        printf("\nEnter a Number to Search or -1 to exit: ");
        scanf("%d",&n);
        if (n == -1){
            break;
        }
        search(&head, n);
        print(head);
    }

    return 0;
}