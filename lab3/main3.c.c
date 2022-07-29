#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr1[10][10];
   int arr2[10][10];
   int row;
   int clone;
   printf("enter the number of row\n");
   scanf("%d",&row);
   printf("enter the number of clone\n");
   scanf("%d",&clone);
   for (int i=0;i<row;i++)
   {
       for(int j=0;j<clone;j++)
       {
           printf("enter the elements of matrix %d %d\n",i,j);
           scanf("%d",&arr1[i][j]);
       }
   }
   for (int i=0;i<row;i++)
   {
       for(int j=0;j<clone;j++)
       {
           printf("%d\t",arr1[i][j]);

       }
       printf("\n");
   }
     for (int i=0;i<row;i++)
   {
       for(int j=0;j<clone;j++)
       {
          arr2[j][i]=arr1[i][j];

       }
   }
     for (int i=0;i<clone;i++)
   {
       for(int j=0;j<row;j++)
       {
           printf("%d\t",arr2[i][j]);

       }
       printf("\n");
   }
    return 0;
}
