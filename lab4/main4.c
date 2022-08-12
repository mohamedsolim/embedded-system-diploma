#include <stdio.h>
#include <stdlib.h>
int powe(int x,int y)
{
    int n=x;
    for(int i=1;i<y;i++)
    {
        x=x*n;
    }
    return x;
}
int main()
{
    int x,y,z;
    printf("enter the base number: ");
    scanf("%d",&x);
    printf("enter the power");
    scanf("%d",&y);
    z=powe(x,y);
    printf("%d ^%d = %d",x,y,z);

    return 0;
}
