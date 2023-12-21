#include <stdio.h>
int main()
{
    int n, sum, avg;
    sum = 0;
    avg = 0;
    printf("enter the total \n");
    scanf("%d", &n);
    int i, a[n];
    printf("enter the nos inside the array\n");
    for (i = 0; i <n; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; ++i)
    {
        sum = sum + a[i];
    }
    printf("the sum is %d\n", sum);
    avg = sum / n;
    printf("the avg is %d\n", avg);
}