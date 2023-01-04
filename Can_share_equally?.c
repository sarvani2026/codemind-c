#include<stdio.h>
int main()
{
    int x,y,t;
    scanf("%d%d",&x,&y);
    t=(x*1)+(y*2);
    if(t%2==0)
    {
        if(x==0 && y%2!=0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    else
    {
        printf("NO");
    }
}