#include<stdio.h>
int main()
{
    int a[] = {1,2,3,1,4,1,2,5};
    int n = sizeof(a) / sizeof(a[0]);
    int maxfreq = 0,element;
    for(int i = 0;i<n;i++)
    {
        int count = 1;
        for(int j = i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        if(count>maxfreq)
        {
            maxfreq = count;
            element = a[i];
        }
    }
    printf("element with maximum frequency = %d\n",element);
    printf("Frequency = %d\n",maxfreq);
    return 0;
}