#include<stdio.h>
int main()
{
    int a[100],n,i,r=0,d,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        while(a[i])
        {
            d=a[i]%10;
            r=r*10+d;
            a[i]=a[i]/10;
        }
        if(r==t)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        r=0;
        
    }
}