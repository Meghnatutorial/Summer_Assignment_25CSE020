#include<stdio.h>
int palindrome(int n)
{
    int s = 0,r = 0,t;
    t = n;
    while(n > 0)
    {
        r = n % 10;
        s = s*10+r;
        n = n / 10;
    }
    if(t == s)
    return 1;
    else 
    return 0;
}
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(palindrome(num))
    printf(" %d  number is palindrome",num);
    else
    printf(" %d  number is not palindrome",num);
    return 0;
}