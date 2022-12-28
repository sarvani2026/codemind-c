#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    do
    {
        printf("%d
",x*x);
        scanf("%d",&x);
    }
    while(x!=-1);
}