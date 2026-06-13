#include<stdio.h>
int main()
{
    int a[10],n,i,even = 0,odd = 0;
    printf("Input the array size");
    scanf("%d",&n);
    printf("Input the array elements:\n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i<n;i++)
    {
        if(a[i] % 2 == 0)
        even++;
        else
        odd++;
    }
    printf("Number of elements = %d %d\n",even,odd);
    return 0;
}