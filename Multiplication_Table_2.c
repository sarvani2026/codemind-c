#include<stdio.h>
int main()
{
    int n,i,m,v,c;
    scanf("%d%d%d",&n,&m,&v);
    for(i=1;i<=m;i++)
    {
        v=i*n;
        printf("%d x %d = %d
",n,i,v);
    }
}