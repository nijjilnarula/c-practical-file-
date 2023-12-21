#include <stdio.h>
int factorial(int n);
int main()
{
    int d;
    printf("enter the no of factorial\n");
    scanf("%d", &d);
    printf("the factorial is %d", factorial(d));
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int nminusone = n - 1;
    int factn = factorial(nminusone);
    int d = factn * n;
    return d;
}