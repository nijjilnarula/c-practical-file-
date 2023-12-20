#include <stdio.h>
int main()
{
    int no, i, sum;
    printf("sum of first _ odd numbers\n pls tell the no:-\n");
    scanf("%d", &no);
    sum = 0;
    for (i = 2; i <= no * 2; i++)
    {

        if (i % 2 == 0)
        {
            continue;
        }
        sum += i;
    }
    printf("the sum of first %d odd number is %d", no, sum+1);
}
