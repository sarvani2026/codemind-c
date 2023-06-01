#include<stdio.h>
int main()
{
    int i,a[100],n,d=1,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=1;
        for(x=1;x<=a[i];x++)
        {
            d=d*x;
        }
        printf("%d
",d);
    }
}