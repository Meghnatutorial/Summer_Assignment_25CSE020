#include<stdio.h>
int main()
{
    int  binary,decimal = 0,base =1,rem;
    printf("Enter the binary number:");
    scanf("%d",&binary);
    while(binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
    binary = binary / 10;
        base = base *2;
    }
    printf("decimal equivalent:%d" ,decimal );
    return 0;
}