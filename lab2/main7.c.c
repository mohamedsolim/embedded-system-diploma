#include <stdio.h>
#include <stdlib.h>

int main()
{
      int x ,sum=1 ;
   printf("enter your positive number ");
   scanf("%d" ,&x );
   if(x>0){
   for(int i=1 ;i<=x ;i++)
   {
    sum*=i;
   }
   printf("\r\nthe sum is :%d ",sum);}
   else
   printf("errors!!!factorial of nigative number doesnot exist ");

    return 0;
}
