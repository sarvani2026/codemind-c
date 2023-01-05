#include<stdio.h>
int main()
{
    int l,b,w,c,t,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=((2*w+l)*(2*w+b))-(l*b);
    t=c*a;
    printf("%d",t);
}