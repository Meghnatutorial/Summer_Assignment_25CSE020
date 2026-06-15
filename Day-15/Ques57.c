#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40,50};
    int n = sizeof(a)/ sizeof(a[0]);
    for(int i = 0;i<n/2;i++)
    {
        int t = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = t;   
    }
    printf("Reversed array");
    for(int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;    

}