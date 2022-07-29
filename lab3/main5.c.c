#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20];
    int n;
    int x;
    int j;
    printf("enter the no of elements\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        {
            printf("enter number %d \n",i+1);
        scanf("%d",&a[i]);
        }
      printf("\n");
   printf("enter the number to be searched \n");
   scanf("%d",&x);

    for( j=0;j<n;j++)
    {
        if (x!=a[j])
        continue;
        else
        {
        printf("this number is found in location %d \n",j+1 );
        j++;
        break;
        }

    }
    if (j==n)
     printf("this number is not found ");
    return 0;
}
