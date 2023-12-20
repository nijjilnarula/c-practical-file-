#include <stdio.h>
int main()
{
    int n;
    float i, sum,c;
    sum = 0.0;
    printf("print sum of series: 1+1/2+....+1/n \n enter the n term:-");
    scanf("%d", &n);
    for (i = 1.0; i <= n + 0.0; i++)
    {
        c = 1.0 / i;
        sum += c;
    }
    printf(" the sum of series: 1+1/2+....+1/%d is %.1f", n, sum);
}