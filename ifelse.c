#include <stdio.h>

int main () {
  int firstVal;
  printf("Enter your value \n");
  scanf("%d", &firstVal);
  if (firstVal < 0)
  {
    printf("Your value is nagetive");
  }
  else
  {
    printf("Your value is positive");
  }
  return 0;
}