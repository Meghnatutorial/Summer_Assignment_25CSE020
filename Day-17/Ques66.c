#include<stdio.h>
int main()
{
    int a[10],b[10],c[20];
    int n1,n2,i,j,k = 0,found;
    printf("Input number of elements in first array");
    scanf("%d",&n1);
    printf("Input the elements of first array");
    for(i = 0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        c[k++] = a[i];
    }
    printf("Input number of elements in second array");
    scanf("%d",&n2);
    printf("Input elements of second array");
    for(i = 0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i = 0;i<n2;i++)
    {
        found = 0;
        for(j = 0;j<k;j++)
        {
            if(b[i] == c[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            c[k++] = b[i];
        }
    }
    printf("Union of array:\n");
    for(i = 0;i<k;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}