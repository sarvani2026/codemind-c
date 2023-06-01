#include<stdio.h>
int main()
{
    int n,d,c=0,e=1;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        c+=d;
        e*=d;
        n=n/10;
    }
    printf("%d",e-c);
    return 0;
}