#include <stdio.h>
float si(float principle,float rate ,float time);
int main(){
float p,r,t;
printf("enter the principle\n");
scanf("%f",&p);
printf("enter the rate\n");
scanf("%f",&r);
printf("enter the time\n");
scanf("%f",&t);
si(p,r,t);
}
float si(float principle,float rate ,float time){
    float s=0.0;
    s=(principle*rate*time)/100;
    printf(" the intrest is %f",s);
}