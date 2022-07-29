#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[30];
    int b[30];
    int n;
    int l,x;
    printf("enter the no of elements\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        {
            printf("enter number %d \n",i+1);
        scanf("%d",&a[i]);
        }
        printf("\n");

    printf("enter the element to be inserted ");
    scanf("%d",&x);
    printf("enter location ");
    scanf("%d",&l);
  n=n+1;
    for (int i=l;i<n;i++)
    {
        b[i]=a[i-1];

    }
    for (int i=0;i<l;i++)
    {
        b[i]=a[i];

    }
     for (int i=l;i<=l;i++)
    {
        b[l-1]=x;

    }

    for(int i=0;i<n;i++)
        {
       printf("%d",b[i]);
        }
      printf("\n");
    return 0;
}
