#include <stdio.h>
#include <stdlib.h>
int reve()
{
    char x;
    scanf("%c",&x);
    if(x!='\n')
    {
        reve();
        printf("%c",x);

    }
}
int main()
{
    printf(" enter your string");
   reve();
    return 0;
}
