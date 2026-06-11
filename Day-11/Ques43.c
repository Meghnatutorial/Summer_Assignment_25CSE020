#include<stdio.h>
int Prime(int n)
{
int i;
if(n<=1)
return 0;
for(i = 2;i<n;i++)
{
    if(n%i ==0)
    return 0;
}
return 1;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(Prime(n))
    printf("Given number is prime");
    else 
    printf("Given number is not prime");
    return 0;
}