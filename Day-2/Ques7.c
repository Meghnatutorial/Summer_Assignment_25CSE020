#include<stdio.h>
int main()
{
    int pro=1,n;
    printf("Input the terms");
    scanf("%d",&n);
    while(n>0)
    {
        pro = (pro*(n%10));
    n = n/10;
}
printf("%d",pro);
return 0;
}