#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    int root1 = 0;
    int root2 = 0;
    int dis = 0;
    printf("nijjilnarula\n 1-b\n 10317702023\n2");
    printf("enter the value of a b c as per the following equation ax+bx^2+c:-\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("a is %d\n b is %d\n c is %d\n ", a, b, c);
    if (a == 0 || b == 0 || c == 0)
    {
        printf("the number should not be zero");
    }
    else
    {
        dis = (b * b) - (4 * a * c);
        root2 = (-b - sqrt(dis)) / (2 * a);
        root1 = (-b + sqrt(dis)) / (2 * a);
        printf("dis is %d\n", dis);
        printf(" Roots of quadratic equation is %d and %d\n", root1, root2);
        if (dis > 0)
        {
            printf(" the roots are real and distinct.");
        }
        else if (dis = 0)
        {
            printf(" the roots are equal.");
        }
        else
        {
            printf(" the real roots do not exist, or the roots are imaginary.");
        }
    }
}