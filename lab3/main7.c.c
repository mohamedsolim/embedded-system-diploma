#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   char a[100];
    printf("enter a string\n");
   scanf("%s",a);
    for (i=0;a[i]!='\0';++i);
    printf(" the length of string is %d\n",i);
    return 0;
}
