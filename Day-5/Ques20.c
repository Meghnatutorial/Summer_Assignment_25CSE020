#include<stdio.h>
int main()
{
    int n,i,LP=-1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i = 2;i<=n;i++)
    {
        while(n%i ==0)
        {
            LP = i;
            n = n/i;
        }
    } 
    printf("LP factor = %d",LP);
    return 0;
}