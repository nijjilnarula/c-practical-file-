#include <stdio.h>
int main()
{
    int no, sum, rno, d, e;
    printf("enter the no\n");
    scanf("%d", &no);
    sum = 0;
    rno = 0;
    e = no;
    while (no > 0)
    {
        d = no % 10;
        sum += d;
        no /= 10;
    }
    do
    {
        d = e % 10;
        rno = rno * 10 + d;
        e /= 10;
    } while (e > 0);

    printf(" the sum is %d\n", sum);
    printf("the reversed no is %d\n", rno);
}
