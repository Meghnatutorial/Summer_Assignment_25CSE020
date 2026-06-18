#include<stdio.h>
int main()
{
    int a[10],n,i,j,t;
    printf("Input the size of array");
    scanf("%d",&n);
    printf("Input arry element");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i<n-1;i++)
    {
        for(j = i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("array in descending order");
    for(i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}