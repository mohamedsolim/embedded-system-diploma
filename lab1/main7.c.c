#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z;
   printf("enter your number1 ");
   scanf("%d" ,&x );
   printf("\r\nenter your number2 ");
   scanf("%d" ,&y );
  x=x^y;
  y=y^x;
  x=x^y;
   printf(" the number1 is %d and number 2 is %d",x,y);

    return 0;
}
