#include<stdio.h>
int main()
{
    int i,n,m,c=0,x;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        c=0;
        for(x=1;x<=i;x++)
        {
            if(i%x==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d
",i);
        }
    }
}