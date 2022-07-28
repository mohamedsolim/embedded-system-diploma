#include <stdio.h>
#include <stdlib.h>

int main()
{
   char x;
   float num1,num2;
   printf("enter the operator + or - or * or /\n");
   scanf("%c",&x);
   printf("enter the number1\n");
   scanf("%f",&num1);
   printf("enter the number2\n");
   scanf("%f",&num2);
   switch(x)
   {
   case '+':
       printf("%f +%f=%f",num1,num2,num1+num2);
       break;
        case '-':
       printf("%f -%f=%f",num1,num2,num1-num2);
       break;
        case '*':
       printf("%f *%f=%f",num1,num2,num1*num2);
       break;
        case '/':
       printf("%f /%f=%f",num1,num2,num1/num2);
       break;
       default:
       printf("errors! the operator is not correct");
       break;

   }
    return 0;
}
