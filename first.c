#include <stdio.h>

/* int main(){
  printf("Hello Sir");
  return 0;
}
 */

/* int main(){
  int number;
  printf("Enter the number \n");
  scanf("%d", &number);
  printf("cube of number is:%d ",number*number*number);
  return 0;
} */

int main (){
  int num1, add;
  float num2, sub;
  printf("enter value of num1 and num2 \n");
  scanf("%d %f", &num1, &num2);
  add = num1+num2;
  sub = num1-num2;
  printf("Result for addition= %d and sub= %d \n", add,sub);
}