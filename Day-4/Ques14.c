#include<stdio.h>
int main()
{
    int n,num1 =0,num2 =1,next,i;
    printf("Input the value of n:");
    scanf("%d",&n);
    if(n==1)
    printf("%dth  Fibonacci term is %d",n,num1);
    else if (n==2)
    printf("%dth Fibonacci term is %d",n,num2);
    else {
        for(i =3;i<=n;i++)
        {
            next = num1+num2;
            num1 = num2;
            num2 = next;
        }
        printf("%dth Fibonacci term is %d",n,num2);
    }
    return 0;
}