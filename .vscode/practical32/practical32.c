#include <stdio.h>
void printline(int n, char ch);
int main()
{
    int a;
    char d;
    printf("enter the charchater\n");
    scanf("%c",&d);
    printf("enter the no fo times u want to print the charachter\n");
    scanf("%d",&a);
    printline(a, d);
}
void printline(int n, char ch)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%c", ch);
    }
}   