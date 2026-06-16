#include<stdio.h>
int main()
{
    int a[] = {5,6,6,7,7,8,9,9};
    int n = sizeof(a) /sizeof(a[0]);
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j;k<n-1;k++)
                {
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicate:\n");
    for(int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}