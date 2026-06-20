#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    int a[10][10],b[10][10],c[10][10];
    int i,j,k;
    printf("Input rows and columns of the first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Input rows and columns of second matrix:\n");
    scanf("%d %d",&r2,&c2);
    printf("c1 = %d r2 = %d\n",c1,r2);
    if(c1 == r2)
    {
      printf("Input first matrix elements:\n");
      for(i=0;i<r1;i++)
      {
        for(j = 0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
      }
      printf("Input second matrix elements:\n");
      for(i = 0;i<r2;i++)
      {
        for(j = 0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
      }
      for(i = 0;i<r1;i++)
      {
        for(j = 0;j<c2;j++)
        {
            c[i][j] = 0;
            for(k = 0;k<c1;k++)
            {
                c[i][j] = c[i][j] +a[i][k]*b[k][j];
            }
        }
      }
      printf("result matrix:\n");
      for(i = 0;i<r1;i++)
      {
        for(j = 0;j<c2;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
      }
    }
    else
    {
      printf("matrix multiplication is not possible");
    }  
    return 0;
}