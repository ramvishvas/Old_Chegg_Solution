// If you have any doubt please let me know
#include<stdio.h>
#include<stdlib.h>
// structure to create linked list
typedef struct num {
    int number;
    struct num *next;
}Stack;

/* A utility function to create a new node */
Stack *newNode(int new_data) {
    /* allocate node */
    Stack* new_node = (Stack*) malloc(sizeof(Stack));
    /* put in the number  */
    new_node->number  = new_data;
    new_node->next =  NULL;

    return new_node;
}

/* Function to print linked list */
void Display(Stack *head){
    Stack *temp = head;
    if (temp==NULL)
    {
        printf("Stack is Empty\n");
        return;
    }else if (temp->next == NULL)
    {
        printf("Stack : %d  ", temp->number);
        return;
    }
    else{
        Display(head->next);//recursive call with next reference
        printf("%d  ", temp->number);// printing it
        return;
    }
    printf("\n");
}

/* function to insert a new_node in a list.*/
void Push(Stack** head_ref, Stack* new_node) {
    Stack* current;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

/* this function deletes the first occurrence of key in linked list */
void Pop(Stack **head_ref){
    // Store head node
    Stack* temp = *head_ref;
    // If head node itself holds the key to be deleted
    if (temp == NULL) {
        printf("Stack is Empty\n");
        free(temp);               // free old head
        return;
    }
    *head_ref = temp->next;
    printf("Popped Number is : %d\n",temp->number);
    free(temp);  // Free memory
}

void Add(Stack **head_ref){
    Stack* temp = *head_ref;
    // check if stack is empty or has only one node
    if (temp == NULL || temp->next == NULL)
    {
        printf("Addition Not Possible\n");
    }else{
        (temp->next)-> number += temp->number;
        *head_ref = temp->next;
        free(temp);
    }
}

void Subtract(Stack **head_ref){
    Stack* temp = *head_ref;
    // check if stack is empty or has only one node
    if (temp == NULL || temp->next == NULL)
    {
        printf("Subtraction Not Possible\n");
    }else{
        if ((temp->next)-> number > temp->number)
        {
            (temp->next)-> number -= temp->number;
        }else{
            (temp->next)-> number = temp->number - ((temp->next)-> number);
        }
        *head_ref = temp->next;
        free(temp);
    }
}

void Mult(Stack **head_ref){
    Stack* temp = *head_ref;
    // check if stack is empty or has only one node
    if (temp == NULL || temp->next == NULL)
    {
        printf("Multiplication Not Possible\n");
    }else{
        (temp->next)-> number *= temp->number;
        *head_ref = temp->next;
        free(temp);
    }
}

void Div(Stack **head_ref){
    Stack* temp = *head_ref;
    // check if stack is empty or has only one node
    if (temp == NULL || temp->next == NULL)
    {
        printf("Divisition Not Possible\n");
    }else{
        if (temp->number != 0)
        {
            (temp->next)-> number /= temp->number;
            *head_ref = temp->next;
            free(temp);
            return;
        }else{
            printf("Division Not Posssible\n");
        }
        
    }
}





/* Drier program to test count function*/
int main()
{
	int choice, n;
    /* Start with the empty list */
    Stack* head = NULL;// for head
    Stack *new_node;
    printf("\n1. Push\n2. Pop\n3. Add\n4. Subtract\n5. Mult\n6. Div\n7. Display\n8. End\n");
    while(1){
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);

        if(choice == 1){
            printf("\nEnter a Number to Push: ");
            scanf("%d",&n);
            new_node = newNode(n);
            Push(&head, new_node);
        }
        else if(choice == 2){
            Pop(&head);
        }
        else if(choice == 3){
            Add(&head);
        }
        else if(choice == 4){
            Subtract(&head);
        }
        else if(choice == 5){
            Mult(&head);
        }
        else if(choice == 6){
            Div(&head);
        }
        else if(choice == 7){
            Display(head);
        }
        else if(choice == 8){
            break;
        }
        else{
            printf("Opps!!! Invalid Choice\n");
        }
    }
    return 0;
}