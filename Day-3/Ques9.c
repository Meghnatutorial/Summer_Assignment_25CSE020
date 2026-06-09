#include<stdio.h>
int main()
{
    int n,i = 2,c=0;
    printf("Input the Number");
    scanf("%d",&n);
    for(i<n;i = 2;i++)
    {
        if(n%i==0)
        c = c+1;
        break;
    }
    if(c ==0)
    {
        printf("Given number is Prime");
    }
    else
    {
        printf("Given number is not Prime");
    }
    return 0;
}