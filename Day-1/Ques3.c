#include<stdio.h>
int main()
{
    int num,i;
     long long factorial = 1;
printf("Enter the number:");
scanf("%d",&num);
for(int i = 1;i<=num;i++)
{
    factorial*=i;
}
printf("Factorial of %d = %d||d",num,factorial);
return 0;
}