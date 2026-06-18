#include<stdio.h>
int main()
{
    int a[10],i,j,n,t,minindex;
    printf("Input the array size");
    scanf("%d",&n);
    printf("\n Input the array element");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i<n-1;i++)
    {
        minindex = i;
     for(j =i +1;j<n;j++)
     {
        if(a[j] < a[minindex])
        {
            minindex = j;
        }
     }
     t = a[i];
     a[i] = a[minindex];
     a[minindex] = t;
    }
     printf(" sorted array");
     for(i = 0;i<n;i++)
     {
        printf("%d",a[i]);
     }
     return 0;
}