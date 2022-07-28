#include <stdio.h>
#include <stdlib.h>

int main()
{
  float  x ,y ,z;
   printf("enter your number ");
   scanf("%f %f %f" ,&x ,&y,&z);
   if (x>y&&x>y)
   printf("the number %f is largest ",x);
   else if(y>x&&y>z)
   printf("the number %f is largest ",y);
   else
     printf("the number %f is largest ",z);

    return 0;
}
