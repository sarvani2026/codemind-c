#include<stdio.h>
int main()
{
    int i,n,m,c,d,sum=0;
    float s=0.0;
    scanf("%d%d%d%d",&n,&m,&c,&d);
    for(i=n;i<=m;i++)
    {
        if(i%c==0&&i%d!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}