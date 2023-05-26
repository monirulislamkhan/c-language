#include <stdio.h>

void add(int x, int y);

/* int main () {
  int a=10,b=7;
  thisIsFun(a,b);
  printf("After function call, a = %d and b = %d\n", a, b);
  return 0;
} */


// Function declaration with formal parameter
void add(int x, int y);

int main()
{
    int a = 5, b = 10;
    
    printf("Before function call, a = %d and b = %d\n", a, b);
    
    // Function call with actual parameters
    add(a, b);
    thisIsFun(a, b);
    
    printf("After function call, a = %d and b = %d\n", a, b);
    
    return 0;
}

// Function definition with formal parameters
void add(int x, int y)
{
    x = x + y;
    y = y + 10;
    
    printf("Inside function, x = %d and y = %d\n", x, y);
}

void thisIsFun (int val1, int val2)
{
  val1 = val1 + val2;
  val2 = val2 + 100;

  printf("Inside function, val1 = %d val2 = %d \n", val1,val2);

}
