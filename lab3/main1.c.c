#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr1[2][2];
   float arr2[2][2];
   float sum=0;
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            printf("enter the array1 element %d%d \t\n",i,j);
            scanf("%f",&arr1[i][j]);


        }
          }
              for(int i=0;i<=1;i++)
    {
                for(int n=0;n<=1;n++)
        {
        printf("enter the array2 element %d%d \t\n",i,n);
            scanf("%f",&arr2[i][n]);
    }
    }


for(int a=0;a<=1;a++)
    {
        for(int m=0;m<=1;m++)
        {
        sum=arr1[a][m]+arr2[a][m];
        printf("\n\n%f\n",sum);

    }
    }
    return 0;
}
