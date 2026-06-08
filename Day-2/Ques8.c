#include<stdio.h>
int main()
{
    int n,s=0,r,t;
    printf("Input the number");
    scanf("%d",&n);
    t = n;
    while(n>0)
{
    r = n%10;
    s = s*10+r;
    n = n/10;
}
if(t==s)
{
    printf("Given number is palindrome");
}
else
{
    printf("Given number is not palindrome");
}
return 0;
}