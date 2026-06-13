#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Input the array size");
    scanf("%d",&n);
    printf("Input the array elements");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("print the array elements");
    for(i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}