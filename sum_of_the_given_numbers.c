#include<stdio.h>
int main()
{
    int i,j,a[100][100],n,m,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<2;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d
",sum);
    }
}