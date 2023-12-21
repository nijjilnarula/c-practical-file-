#include<stdio.h>
#include<math.h>
int amstrong(int n );
int main(){
    int i;
for ( i = 100; i <=999; i++)
{
    amstrong(i);
}

}
int amstrong(int n ){
    int c,sum,digit;
    c=n;
    sum=0;
    while(n!=0){
    digit=n%10;
    sum=sum+pow(digit,3);
    n=n/10;
    }
    if (sum==c)
    {
        printf("%d\n",c);
    }
    
}
