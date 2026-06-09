#include<stdio.h>
int main()
{
    int i,num,count = 0,min,max;
    printf("Input the min value:");
    scanf("%d",&min);
    printf("Input the max value:");
    scanf("%d",&max);
    printf("Primr num between %d and %d are:\n",min,max);
    num = min;
    while(num <= max)
    {
        count = 0;
        i = 2;
        while(i<=num/2)
        {
            if(num%i ==0)
            {
                count++;
                break;
            }
            i++;
        }
        if(count ==0 && num>1)
        {
            printf("%d",num);
        }
        num++;
    }
    return 0;
}