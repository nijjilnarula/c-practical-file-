#include <stdio.h>
int main()
{
    int a;
    printf("enter the no \n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the no is even");
    }
    else
    {
        printf("the no is odd");
    }
}