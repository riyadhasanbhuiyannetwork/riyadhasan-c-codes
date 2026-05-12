#include<stdio.h>
int main ()
{
    int a,b,c,d;
    float e;
    printf("Enter Three Nmuber :");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    e=(float)d/3;
    printf("%d %f",d,e);
}
