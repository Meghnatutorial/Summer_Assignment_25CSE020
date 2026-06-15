#include<stdio.h>
int main()
{
    int a[] = {0,1,0,3,12,0,5};
    int n = sizeof(a) / sizeof(a[0]);
    int j = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }
    while(j<n)
    {
        a[j] = 0;
        j++;
    }
    printf("array after moving zeroes to end:\n");
    for(int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}