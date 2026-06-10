#include<stdio.h>
int main()
{
    int a,b,result = 1;
    printf("Enter the values of a and b");
    scanf("%d %d",&a,&b);
    while(b !=0)
    {
        result *= a;
        b--;
    }
    printf("Power = %d",result);
    return 0;
}