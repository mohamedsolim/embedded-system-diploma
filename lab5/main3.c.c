#include <stdio.h>
#include <stdlib.h>
struct num{
float real;
float imag;
};
float add ()
{
    struct num d1;
    struct num d2;
    struct num sum;
    printf("for complex number 1\n");
    printf("the real:  ");
    scanf("%f",&d1.real);
    printf("the imaginary: ");
    scanf("%f",&d1.imag);
    printf("for complex number 2\n");
    printf("the real:  ");
    scanf("%f",&d2.real);
    printf("the imaginary: ");
    scanf("%f",&d2.imag);
    sum.real=d1.real+d2.real;
    sum.imag=d1.imag+d2.imag;
    printf("sum= %.2f +%.2f i",sum.real,sum.imag);

}
int main()
{
    add();
    return 0;
}
