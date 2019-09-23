#include <stdio.h>
// it will return
// 1 -> true
// 0 -> flase
int isLeter(char c)
{
  // check validity of c
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
  {
    return 1;
  }
  return 0;
}

int charCount(char *str)
{
  // base case
  if (!str[0])
  {
    return 0;
  }
  // if letter found then add 1 and recursive call
  if (isLeter(*str))
  {
    return 1+charCount(str+1);
  }
  else 
  {
    return charCount(str+1);
  }
  // or you can write all return and recursive step in single line
  // return isLeter(*str) + charCount(str+1);
}

int main()
{
  printf("%d\n",charCount("Hello"));
  printf("%d\n",charCount("Goodbye!"));
  printf("%d\n",charCount("!@#!$%^"));
  printf("%d\n",charCount("1Aa!"));
}