#include<stdio.h>
int main()
{
    int a[10],n,i,key,count = 0;
    printf("Input the array size");
    scanf("%d",&n);
    printf("Input the array elements:\n",n);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to find frequency");
    scanf("%d",&key);
    for(i = 0;i<n;i++)
    {
        if(a[i] == key)
        {
            count++;
        }
    }
    printf("frequency = %d\n",count);
    return 0;
}