#include<stdio.h>
int perfect(int n)
{
    int i,s = 0;
    for(i = 1;i<n;i++)
    {
        if(n % i == 0)
        {
            s = s +i;
        }
    }
    if(s == n)
    return 1;
    else
    return 0;
}
int main()
{
        int num;
        printf("Enter  the number");
        scanf("%d",&num);
        if(perfect(num))
        printf("%d Given number is perfect number ",num);
        else 
        printf("%d  Given number is perfect number",num);
        return 0;
}

