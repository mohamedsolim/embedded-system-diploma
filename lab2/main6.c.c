#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ,sum=0 ;
    printf("enter your positive number ");
    scanf("%d" ,&x );
   for(int i=1 ;i<=x ;++i)
   {
    sum+=i;
   }
   printf("\r\nthe sum is :%d ",sum);

    return 0;
}
