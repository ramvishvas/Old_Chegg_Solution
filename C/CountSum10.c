#include <stdio.h>

int digitSum(int n){
  if (n == 0)
  {
    return 0;
  }
  return (n%10)+digitSum(n/10);
}

int main(void)
{
  int count = 0;
   for (int i = 1; i <= 1000; ++i)
   {
     if (digitSum(i) == 10)
     {
       count++;
     }
   }
   printf("%d\n",count);
}
