#include<stdio.h>
int main()
{
    int a[10],n,i,largest,second;   
    printf("Input the array size");
    scanf("%d",&n);
    printf("Input the array element:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest = second = a[0];
    for(i = 1;i<n;i++)
    {
        if(a[i]>largest)
        {
            second = largest;
            largest = a[i];
        }
        else
        if(a[i]>second && a[i]!=largest)
        {
            second = a[i];
        }
    }
    printf("second largest element = %d\n",second);
    return 0;
}