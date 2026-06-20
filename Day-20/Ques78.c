#include<stdio.h>
int main()
{
    int a[1][10];
    int n,i,j,check = 1;
    printf("Input order of matrix:\n");
    scanf("%d",&n);
    printf("Input matrix elements:\n");
    for(i = 0;i<n;i++)
    {
        for(j =0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i =0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] != a[j][i])
            {
                check = 0;
                break ;
            }
        }
    }
    if(check == 1)
    printf("matrix is symmetric");
    else
    printf("matrix is not symmatric");
    return 0;
}