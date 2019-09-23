#include <stdio.h>
// .................main function ...........................
int main(int argc, char const *argv[])
{
  float milage, cost, cost10 = 0, cost50 = 0, cost400 = 0;
  printf("Enter car's miles/gallon : ");
  scanf("%f",&milage);
  printf("Enter gas dollors/gallon : ");
  scanf("%f",&cost);

  // cost/milage ==> dollor per mile
  cost10 = (cost * 10) / milage;
  cost50 = (cost * 50) / milage;
  cost400 = (cost * 400) / milage;

  printf("%f %f %f\n",cost10, cost50, cost400);
  return 0;
}