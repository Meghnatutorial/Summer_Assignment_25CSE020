#include<stdio.h>
int main()
{
    int a[] = {3,5,1,8,6};
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 9;
    int found = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("Pair found:%d and %d\n",a[i],a[j]);
                found = 1;
            }
        }
    }
    if(found == 0)
    {
        printf("no pair found");
    }
    return 0;
}