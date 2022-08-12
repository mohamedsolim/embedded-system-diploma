#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
   if(n!=1)
    return n*fact(n-1);
}
int main()
{
   int n,c;

   printf("enter the positive number: ");
   scanf(" %d",&n);
   c=fact(n);
   printf("%d",c);
    return 0;
}
