#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    char x;
    int c=0;
    printf("enter a string\n");
    gets(a);
    printf("enter the character to find freq \n");
    scanf("%c",&x);
    for (int i=0;a[i]!='\0';++i)
    {
        if (a[i]==x)
           c+=1 ;
    }
 printf("the freq of %c is %d ",x,c);
    return 0;
}
