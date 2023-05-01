#include <stdio.h>
int main (){
  int a,b,sum,mul,div;
  printf("Enter Value a and b \n");
  scanf("%d %d", &a,&b);
  sum = a+b;
  mul = a*b;
  div = a/b;
  printf("sum is = %d \n mul is = %d \n div is %d",sum,mul,div);
  return 0;
}