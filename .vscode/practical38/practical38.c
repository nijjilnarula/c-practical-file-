#include <stdio.h>
int fibbonachi(int n);
int main()
{
    int d, i;
    printf("enter the no terms in fibbonachi\n");
    scanf("%d", &d);
    printf("the fibbonachi is ");
    for (i = 0; i <= d; i++)
    {
        printf("%d", fibbonachi(i));
    }
}
int fibbonachi(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibnminusoneplusnminustwo = fibbonachi(n - 1) + fibbonachi(n - 2);
    int fib = fibnminusoneplusnminustwo;
    return fib;
}