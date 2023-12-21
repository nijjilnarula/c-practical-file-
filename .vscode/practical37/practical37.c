#include <stdio.h>
int factorial();
int main()
{
    factorial();
    factorial();
    factorial();
}
int factorial()
{
    int static i=1;
    ++i;
    printf("%d\n",i);
}