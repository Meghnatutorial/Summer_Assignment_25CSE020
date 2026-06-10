#include<stdio.h>
int main()
{
    int n,num1 = 0,num2 = 1,i,next;
    printf("Input the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series:");
    for(i = 1;i<=n;i++)
    {
        printf("%d",num1);
        next = num1+num2;
        num1 = num2;
        num2 = next;
    }
    return 0;
}