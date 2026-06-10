#include<stdio.h>
int main()
{
    int a[10],num,i,j;
    printf("Enter  the decimal number:");
    scanf("%d",&num);
    for(i = 0;num>0;i++)
    {
        a[i] = num % 2;
        num = num /2;
    }
    printf( "Given number is binary number");
    for(j = i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0;
}