#include <stdio.h>
int isHappyNumber(int num)
{    
    int rem = 0, sum = 0;   
    while(num > 0)
    {    
        rem = num%10;//48%10=8,4%10    
        sum = sum + (rem*rem);//0+64;64+_    
        num = num/10;//48/10=4
    }    
    return sum;    
}    
        
int main()    
{    
    int num,result;
    scanf("%d",&num);//48
    result=num;//res=48
    while(result != 1 && result != 4)
    {    
        result = isHappyNumber(result);//    
    }    
    if(result == 1)
    {    
        printf("True");    
    }
    else if(result == 4)    
    {
        printf("False");     
    }
     
    return 0;    
}    