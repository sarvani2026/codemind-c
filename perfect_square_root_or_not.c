#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n==i*i)
        {
            x++;
        }
    }
    if(x==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}