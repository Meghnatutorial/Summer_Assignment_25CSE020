#include<stdio.h>
int main()
{
    int a[10],n,key,i,found = 0;
    printf("Input the array size:");
    scanf("%d",&n);
    printf(" Input %d array elements:\n",n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input the element to search:");
    scanf("%d",&key);
    for(i = 0;i<n;i++)
    {
        if(a[i] == key)
        {
            found = 1;
            printf("Element found at position %d\n ",i+1);
            break;
        }
    }
    if(found == 0)
    {
        printf(" element is not found\n");
    }
    return 0;
}
