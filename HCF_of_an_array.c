#include<stdio.h>
int main()
{
    int arr[100],i,n,s,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }
    for(max;max>0;max--)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]%max!=0)
            {
                s=0;
                break;
            }
            else
            s=1;
        }
        if(s==1)
        {
            printf("%d",max);
            break;
        }
    
    }
}