#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr[100];
    int n;
    float avr ;
    float sum=0;
    printf("enter num of array \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the number %d \n",i+1);
        scanf("%f",&arr[i]);
        sum+=arr[i];

    }
        avr=sum/n;
        printf("the avrege is %f",avr);
        return 0;
}
