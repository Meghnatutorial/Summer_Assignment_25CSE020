#include<stdio.h>
int main()
{
    int i,num1,num2,lcm;
    printf("Input the Integers");
    scanf("%d %d",&num1,&num2);
    lcm= (num1>num2)? num1:num2;
    while (1)
    {
       if(lcm %num1 ==0 && lcm% num2 ==0)
       {
        printf("LCM = %d",lcm);
        break;
       }
       lcm++;
    }
    return 0;
}