#include <stdio.h>
int replace(int *a, int *b);
int main()
{
    int c, d;
    printf("enter the first no\n ");
    scanf("%d", &c);
    printf("enter the second no\n ");
    scanf("%d", &d);
    replace(&c, &d);
    printf("now the first no is %d and the second no is %d ", c, d);
}
int replace(int *a, int *b)
{
    int e = 0;
    e = *a;
    *a = *b;
    *b = e;
}
