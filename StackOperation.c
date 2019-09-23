// If you have any doubt please let me know
#include<stdio.h> 
#include <stdlib.h>
// structure to create Queue
typedef struct Char
{
    char val;
    struct Char *next;
}Queue;

/* A utility function to create a new node */
Queue *newNode(char new_data) 
{
    /* allocate node */
    Queue* new_node = (Queue*) malloc(sizeof(Queue));
    /* put in the val */
    new_node->val  = new_data;
    new_node->next =  NULL;

    return new_node;
}

/* Function to print linked list */
void Display(Queue *head)
{
    Queue *temp = head;
    while(temp != NULL)
    {
        printf("%c ",temp->val);
        temp = temp->next;
    }
    printf("\n");
}


/* function to insert a new_node in a list.*/
void enqueue(Queue** head_ref, Queue* new_node) 
{
    Queue* current = *head_ref;
    if (current == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while(current -> next != NULL)
    {
        current = current->next;
    }
    current -> next = new_node;
}

// this is the function that you need..............................................
char dequeue_element(Queue** queue, int index)
{
    Queue* current = *queue;
    Queue* prev;
    int position = 0;
    int flag = 0;
    char ch;
    // if queue is empty.... print error
    if (current == NULL)
    {
        printf("Error... Queue is empty\n");
        exit(1);
    }
    // if index is 0 then remove first element
    else if (index == 0)
    {
        // update queue 
        *queue = (*queue) -> next;
        ch = current->val;
        free(current);
        return ch;
    }
    while(current->next != NULL)
    {
        if (position == index-1)
        {
            //  set flag to 1 and break the loop
            flag = 1;
            break;
        }
        current = current -> next;
        ++position;
    }
    // if index is present
    if (flag == 1)
    {
        Queue *temp = current -> next;
        current -> next = temp -> next;
        ch = temp -> val;
        free(temp);
        return ch;
    }
    printf("Opps... index out of bound\n");
    exit(1);
}
//....................................................................................
/* Drier program to test count function*/
int main()
{
    /* Start with the empty list */
    Queue* head = NULL;// for head
    Queue *new_node;
    char ch;
    new_node = newNode('A');
    enqueue(&head, new_node);
    new_node = newNode('B');
    enqueue(&head, new_node);
    new_node = newNode('C');
    enqueue(&head, new_node);
    new_node = newNode('D');
    enqueue(&head, new_node);
    new_node = newNode('E');
    enqueue(&head, new_node);

    Display(head);
    ch = dequeue_element(&head,0);
    printf("Return value : %c\n", ch);
    Display(head);

    ch = dequeue_element(&head,1);
    printf("Return value : %c\n", ch);
    Display(head);

    ch = dequeue_element(&head,2);
    printf("Return value : %c\n", ch);
    Display(head);

    ch = dequeue_element(&head,-1);
    printf("Return value : %c\n", ch);
    Display(head);

    
    
    return 0;
}