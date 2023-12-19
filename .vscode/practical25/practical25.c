#include <stdio.h>
int main()
{
    int x, n, i,no;
    no=x;
    i = 1;
    printf("enter the no of which u want to find the power\n");
    scanf("%d", &x);
    printf("enter the power\n");
    scanf("%d", &n);
    while (i < n)
    {
        x = x * x;
        i++;
    }
    printf("the power of the no %d is %d", no,x);
}