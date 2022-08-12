#include <stdio.h>
#include <stdlib.h>
struct info{
char name[20];
int  roll;
float marks;
}x;
int main()
{
    char first_name[20];
  printf("enter the information of students \n enter name  ");
  scanf ("  %s",x.name);
  printf(" enter roll number ");
  scanf("  %d",&x.roll);
  printf("enter marks  ");
  scanf("  %f",&x.marks);
  printf("displaying information \n name : %s\n roll: %d\n marks: %f\n",x.name ,x.roll,x.marks);
    return 0;
}
