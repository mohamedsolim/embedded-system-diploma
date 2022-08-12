#include <stdio.h>
#include <stdlib.h>
struct distance{
int feet;
float inch;
};
int main()
{
    struct distance d1;
    struct distance d2;
    struct distance sum;
    printf("enter the information of distance 1\n");
    printf("enter feet: ");
    scanf("%d",&d1.feet);
    printf("enter inch:  ");
    scanf("%f",&d1.inch);
    printf("enter the information of distance 2\n");
    printf("enter feet: ");
    scanf("%d",&d2.feet);
    printf("enter inch:  ");
    scanf("%f",&d2.inch);
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>12.0)
    {
        sum.inch=12-sum.inch;
        ++sum.feet;

    }
    printf("sum of distance %d '%.1f\"",sum.feet,sum.inch);
    return 0;
}
