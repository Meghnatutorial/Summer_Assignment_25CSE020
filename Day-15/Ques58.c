#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40,50};
    int n = sizeof(a)/sizeof(a[0]);
    int fir = a[0];
    for(int i = 0;i<n-1;i++)
    {
        a[i] = a[i + 1];
    }
    a[n -  1] = fir;
  printf("array after left rotation:\n");
  for(int i = 0;i<n;i++)
  {
   printf("%d",a[i]);
  }
 return 0;
}