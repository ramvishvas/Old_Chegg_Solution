#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// define employee structures
#define NAME_LENGTH 16

typedef struct name 
{
   char firstName[NAME_LENGTH];
   char familyName[NAME_LENGTH];
}Name;

typedef struct emp
{
   unsigned int   id;
   float salary;
   Name   name;
}Employee;

// define employee operations
void printEmployee(Employee *emp)
{
   printf("%-16s %-16s %8d %8.2f ",
       emp->name.firstName, emp->name.familyName,
       emp->id, emp->salary);

}

void initEmployee(Employee *emp, char *firstName, char *familyName,
   unsigned int id, float salary)
{
   strncpy(emp->name.firstName, firstName, NAME_LENGTH - 1);
   strncpy(emp->name.familyName, familyName, NAME_LENGTH - 1);
   emp->id = id;
   emp->salary = salary;
}
// define linked liststructures
typedef struct listNodeStruct ListNode;
struct listNodeStruct {
   Employee *data;
   ListNode *next;   // next node in the linked list
};

int addNode(ListNode **head, Employee *data)
{
   ListNode *p = NULL;
   // Step 1 allocate memory for the node and initialize all pointers to NULL
   // if an error then return 1
   p = (ListNode *)malloc(sizeof(ListNode));
   if (p == NULL)
   {
      return 1;
   }
   // Step 2 assign the employee record to data
   p->data = data;
   // Step 3 update the next field of the new node to point to the first node in the list as a "next" node
   p->next = *head;
   // Step 4 update the list head to point to the new node.
   *head = p;
   return(0);
}

void printList(ListNode *head)
{
   while(head != NULL)
   {
      printEmployee(head->data);
      printf("\n");
      head = head->next;
   }
}

void printListRecursive(ListNode *head)
{
   // check bounary conditions (list is not empty)
   if (head == NULL)
   {
      return;
   }
   // do work - print the first node using the function printEmployee()
   printEmployee(head->data);
   printf("\n");
   // make recursive call with the next node
   printListRecursive(head->next);
}

int printThirdLast(ListNode *head)
{
   // check bounary conditions - here the recursion stops when the
   if (head != NULL && head->next != NULL && head->next->next != NULL)
   {
      if (head->next->next->next == NULL)
      {
         printEmployee(head->data);
         return 0;
      }
   }
   else
   {
      return 1;
   }
   printThirdLast(head->next);
   return(0);
}

void printListInReverse(ListNode *head)
{
   // check bounary conditions
   if (head == NULL)
   {
      return;
   }
   // make recursive call
   printListInReverse(head->next);
   // do work
   printEmployee(head->data);
   printf("\n");
}
/***********************************************************/
void deleteNode(ListNode **head, Employee **data)
{

   ListNode *temp = *head, *prev;
   // Step 1
   // if the list is empty then
   // set data to NULL
   // return
   // If head node itself holds the key to be deleted
   if (temp != NULL && temp->data == *data)
   {
     *head = temp->next;   // Changed head
     free(temp);               // free old head
     return;
   }
   // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != (*data)) {
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
/***********************************************************/

int main(void) {
int i;
  
Employee employee[5];
Employee *data = NULL;

initEmployee(&employee[0], "Joe", "Clark", 567890345,100345);
initEmployee(&employee[1],"Brian", "Mulroney", 567890767, 178983);
initEmployee(&employee[2],"Jean", "Chretien", 567345890, 190329);
initEmployee(&employee[3],"Paul", "Martin", 567899528, 192456);
initEmployee(&employee[4],"Kim", "Campbell", 567436582, 192234);


printf("array of employees:\n");
for (i = 0; i < 5; i++) {
   printEmployee(&employee[i]);
   printf("\n");
}

ListNode *empHead = NULL;

// add five nodes
for (i = 0; i < 5; i++) {
   addNode(&empHead, &employee[i]);
}

printf("\nPrinting the list from the first node to the last node:\n");
printList(empHead);


printf("\nRecursive printing of list:\n");
printListRecursive(empHead);
  
printf("\nReverse printing of list:\n");
printListInReverse(empHead);

printf("\nPrinting the third last node in the list:\n");
printThirdLast(empHead);
printf("\n");


printf("\nPrinting the list from the first node to the last node:\n");
printList(empHead);

// delete 2nd node
deleteNode(&empHead, &(empHead->next)->data);

printf("\nafter deleting 2nd node first node to the last node:\n");
printList(empHead);

// printf("");
return 0;
}