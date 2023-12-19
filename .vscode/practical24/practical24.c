#include <stdio.h>
int main()
{

    int m, n;
    int i = 1;
    printf("enter n\n ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    printf("enter m\n ");
    scanf("%d", &m);
    while (m >= 1)
    {
        printf("%d\n", m);
        m--;
    }
    return 0;
}
