#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("enter the character\r\n");
    scanf("%c" ,&x);
    if(x=='a'||x=='i'||x=='o'||x=='u'||x=='e')
    {
        printf("this character is vowel\r\n");
    }
    else if(x=='I'||x=='A'||x=='O'||x=='U'||x=='E')
    {
        printf("this character is vowel\r\n");
    }
        else
        {
          printf("this character is constant ");
        }
    return 0;
}

