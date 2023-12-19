#include <stdio.h>
int main()
{
    int n, i, d, c;
    printf("enter the no of tables");
    scanf("%d", &n);
    c = 1;
    do
    {
        i = 1;
        d = 0;
        do
        {
            d = c * i;
            printf("%d*%d=%d\n", c, i, d);
            i++;
        } while (i <= 10);
        printf("\n");
        c++;
    } while (c <= n);
}