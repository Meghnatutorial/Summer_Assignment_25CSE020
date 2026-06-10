#include<stdio.h>
int main()
{
    int num,n,r,sum=0,fact,i;
    printf("Enter the number:");
    scanf("%d",num);
    n = num;
    while(n !=0)
    {
        r = n%10;
        fact = 1;
        for(i=1;i<=r;i++)
        {
            fact = fact*i;
        }
        sum = sum+fact;
        n= n/10;
    }
    if(sum == num)
    printf("Given number is strong number");
    else
    printf("Given number is not strong number");
    return 0;
}