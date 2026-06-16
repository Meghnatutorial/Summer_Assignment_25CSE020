#include<stdio.h>
int main()
{
    int a[] = {1,3,4,5,6};
    int n = 6;
    int size = sizeof(a) / sizeof(a[0]);
    int s = 0;
    int total = n*(n+1) /2;
    for(int i = 0;i< size;i++)
    {
      s += a[i];
    }
    int missing = total - s;
    printf("Missing number = %d\n",missing);
    return 0;
}