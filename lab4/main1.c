#include <stdio.h>
#include <stdlib.h>
void prime(int n1,int n2)
{
    int i,j;
    for( i=n1+1;i<n2;i++)
    {
        int c=0;
        for( j=1;j<=n2;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d",i);
            printf("\n");
        }
    }

}
int main()
{
    int n1,n2;
    printf("enter the number 1: ");
    scanf(" %d",&n1);
    printf("enter the number 2: ");
    scanf(" %d",&n2);
    printf("prime number between %d and %d is ",n1,n2);
    prime(n1,n2);

    return 0;
}
