#include<stdio.h>
int armstrong(int n)
{
    int s = 0,r,t = n;
    while(n>0)
    {
        r = n % 10;
        s = s +(r*r*r);
        n = n /10;
    }
    if(s == t)
    return 1;
    else
    return 0;
}
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(armstrong(num))
    printf("%d Given number is armstrong",num);
    else
    printf("%d Given number is not armstrong",num);
    return 0;
}