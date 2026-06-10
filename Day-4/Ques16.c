#include<stdio.h>
#include<math.h>
int main()
{
    int i,num,count = 0,min,max ,temp,digit,sum,rem;
    printf("Input the min value:");
    scanf("%d",&min);
    printf("Input the max value:");
    scanf("%d",&max);
    printf("Armstrong num between %d and %d are:\n",min,max);
    for(num = min;num<=max;num++)
    {
        temp = num;
        count = 0;
        sum = 0;
        while(temp !=0)
        {
            count++;
            temp = temp/10;
        }
        temp = num;
        while(temp !=0)
        {
            rem = temp%10;
            sum = sum+pow(rem,count);
            temp = temp/10;
        }
        if(sum ==num)
        {
            printf("%d",num);
        }
    }
    return 0;
}