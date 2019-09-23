#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define ARRAY_SIZE 1000
#define MAX 20

void menu()
{
  printf("\nType D to Deposit Money\n");
  printf("Type W to Withdraw Money\n");
  printf("Type B to Display Balance\n");
  printf("Type C to Change User,Display user name\n");
  printf("Type E to Exit\n");
}
// if userName is present then return their index else return -1
int checkUser(const char Customers[ARRAY_SIZE][MAX], char userName[MAX])
{
  int row = 0;
  // scan all user list to find given user name
  while(Customers[row][0])
  {
    // check is user name exit and return their index
    if(strcmp(Customers[row], userName) == 0)
    {
      return row;
    }
    row++;
  }
  // if user not found
  return -1;
}

int main()
{
   char *filename = "UserInformation.txt";

   char Customers[ARRAY_SIZE][MAX];
   double Balances[ARRAY_SIZE];
   // to store input username and choice
   char userName[MAX], choice;

   int row, index;
   double ammount;

   FILE *fptr = fopen(filename, "r");
  // file open error handling
  if (fptr == NULL)
  {
    printf("Error Opening The File! ");
    exit(1);
  }
  // scan whole file and store data
  row = 0;
  while (!feof(fptr) && row < ARRAY_SIZE)
  {
     fscanf(fptr, "%s %lf", Customers[row], &Balances[row]);
     ++row;
  }
  fclose(fptr);
  // get username as input
  printf("Welcome to BankApp\n");
  printf("Please Enter Username: ");
  scanf("%s", userName);

  index = checkUser(Customers,userName);
  // if user name present
  if (index != -1)
  { 
    menu();
    while(1)
    {
      
      printf("\nEnter your choice: ");
      getchar();
      scanf("%c", &choice);
      // if choice is D
      if(choice == 'D')
      {
        printf("Enter Ammount : ");
        scanf("%lf", &ammount);
        // check validity ao ammount
        if (ammount < 0)
        {
          printf("Invalid Ammount\n");
        }
        else
        {
          Balances[index] += ammount;
        }
      }
      // if choice is W
      else if (choice == 'W')
      {
        printf("Enter Ammount : ");
        scanf("%lf", &ammount);
         // check validity ao ammount
        if (ammount < 0)
        {
          printf("Invalid Ammount\n");
        }
        else
        {
          // withdrawal condition
          if(Balances[index] < ammount)
          {
            printf("Insufficient fund\n");
          }
          else
          {
            Balances[index] -= ammount;
          }
        }
      }
      else if (choice == 'B')
      {
        printf("Balance : %lf\n",Balances[index]);
      }
      else if (choice == 'C')
      {
        printf("Enter New Name: ");
        scanf("%s", userName);
        strcpy(Customers[index], userName);
        printf("Updated UserName: %s\n", Customers[index]);
      }
      else if (choice == 'E')
      {
        break;
      }
      else
      {
        printf("Invalid Choice\n");
      }
    }
  }
  else
  {
    printf("%s Not Exits\n",userName);
  }
  return 0;
}