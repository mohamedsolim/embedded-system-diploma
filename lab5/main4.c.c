#include <stdio.h>
#include <stdlib.h>
struct info{
char name[20];
int  roll;
float marks;
};
int main()
{
    int n;
    struct info d[50];
    printf("enter the number of student \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the info of student %d\n",i+1);
        printf(" roll number: ");
        scanf(" %d",&d[i].roll);
        printf("enter name: ");
        scanf(" %s",&d[i].name);
        printf("enter marks: ");
        scanf(" %f",&d[i].marks);
    }
    printf("displaying info of student\n");
    for(int i=0;i<n;i++)
    {
        printf("roll number : %d\n",d[i].roll);
        printf("name: %s\n",d[i].name);
        printf("marks: %f\n",d[i].marks);
    }
    return 0;
}
