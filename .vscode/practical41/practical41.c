#include <stdio.h>
int palindrome(int n);
int main()
{
    int a;
    printf("enter a four digit no\n");
    scanf("%d", &a);
    if (a >= 1000 && a <= 9999)
    {
        palindrome(a);
    }
    else
    {
        printf("enter a 4 digit no");
    }
}
int palindrome(int n)
{
    int c, rev, digit;
    c = n;
    rev = 0;
    digit = 0;

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (rev == c)
    {
        printf("this is a palindrome");
    }
    else
    {
        printf("this is not a palindrome");
    }
}
