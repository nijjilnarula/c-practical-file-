#include <stdio.h>
int factorial(int *n);
int main()
{
    int c;
    printf("enter the no for the factorial\n");
    scanf("%d", &c);
    factorial(&c);
    printf("the factorial is %d", c);
}
int factorial(int *n)
{
    int i, fac;
    fac = 1;
    for (i = *n; i >= 1; i--)
    {
        fac *= i;
    }
    *n = fac;
}
