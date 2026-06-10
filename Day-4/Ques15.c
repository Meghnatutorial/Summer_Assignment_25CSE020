#include<stdio.h>
#include<math.h>
int main()
{
    int r,n,s=0,c=0,n1,n2;
    printf("Enter the number:");
    scanf("%d",&n);
    n1 = n2 =n;
    while(n!=0)
    {
        c++;
        n = n/10;
    }
    while(n1!=0)
    {
        r= n1%10;
        s = s+pow(r,c);
        n1 = n1/10;
    }
    if(s==n2)
        printf("Given num is armstrong");
    else
        printf("Given num is not armstrong");
    return 0;
}