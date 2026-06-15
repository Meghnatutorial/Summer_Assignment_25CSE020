#include<stdio.h>
int main()
{
    int a[] = { 10,20,30,40,50};
    int n = sizeof(a)/ sizeof(a[0]);
    int last = a[n - 1];
    for(int i = n-1;i>0;i--)
    {
        a[i] = a[i-1];
    }
    a[0] = last;
    printf("array after right rotation:\n");
    for(int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}