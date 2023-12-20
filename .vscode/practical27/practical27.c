#include <stdio.h>
int main()
{
    int rows, c, n;
    printf("enter the no of rows");
    scanf("%d", &n);
    for (c = 1; c <= n; c++)
    {
        for (rows=1;rows<=c;rows++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (c = n; c >= 1; c--)
    {
        for (rows=c;rows>=1;rows--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("enter the no of rows");
    scanf("%d", &n);
    for (c = 1; c <= n; c++)
    {
        for (rows=1;rows<=c;rows++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
    for (c = n; c >= 1; c--)
    {
        for (rows=c;rows>=1;rows--)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}