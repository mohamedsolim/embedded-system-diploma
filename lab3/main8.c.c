#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100],x;
    int i,j=0,n;
   printf("enter a string\n");
   gets(a);
 n=strlen(a) - 1;
  j=n;
  i=0;
   while(i<j)
   {
      x=a[i];
      a[i]=a[j];
      a[j]=x;
      i++;
       j--;
   }
     printf("reverse string is %s",a);


    return 0;
}
