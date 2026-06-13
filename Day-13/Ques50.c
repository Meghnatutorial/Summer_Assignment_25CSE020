#include<stdio.h>
int main()
{
    int a[10],n,i,s = 0;
    float avg;
    printf("Input the array size");
    scanf("%d",&n);
    printf("\n Input the array elements");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s = s+a[i];
    }
    avg = (float)s/n;
    printf("s = %d\n",s);
    printf("Average = %.2f\n",avg);
    return 0;
}