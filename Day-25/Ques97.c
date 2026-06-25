#include<stdio.h>
int main()
{
    int a[20],b[20],c[50];
    int n1,n2,i,k,j;
    printf("Input the size of first array");
    scanf("%d",&n1);
    printf("Input elements of first sorted array:\n ");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Input size of second array");
    scanf("%d",&n2);
    printf("Input elements of second sorted array:\n ");
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    i=j=k=0;
    while(i<n1&&j<n2)
    {
        if(a[i] < b[j])
        c[k++]=a[i++];
        else
        c[k++]=b[j++];
    }
    while(i<n1)
    c[k++]=a[i++];
    while(j<n2)
    c[k++]=b[j++];
    printf("merged array:\n");
    for(i=0;i<k;i++)
    printf("%d",c[i]);
    return 0;
}