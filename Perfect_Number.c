#include<stdio.h>
int main()
{
    int p,v=0,r;
    scanf("%d",&p);
    for(r=1;r<p;r++)
    {
        if(p%r==0)
        {
            v=v+r;
        }
    }
    if(p==v)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}