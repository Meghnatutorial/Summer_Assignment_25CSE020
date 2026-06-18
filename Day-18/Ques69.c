#include<stdio.h>
int main()
{
    int a[10],i,j,n,t;
    printf("Input the array size");
    scanf("%d",&n);
    printf("\n Input the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i<n-1;i++)
    {
        for(j = 0;j<n-i-1;j++)
        {
            if(a[j]> a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("\n the element are sorted in ascending order");
    for(i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}