#include <stdio.h>
int main()
{
    int no, i;
    printf("enter the no\n");
    scanf("%d", &no);
    if (no <= 1)
    {
        printf("the no is neither a prime nor a composite no \n");
    }
    else{
        for ( i = 2; i<=no; i++)
        {
            if(no%i==0)
            {
                printf("the no is composite");
                break;
            }
            else{
                printf("the no is prime");
                break;
            }
            
        }
        
    }
}