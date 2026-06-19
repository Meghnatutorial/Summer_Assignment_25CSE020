#include<stdio.h>
int main()
{
    int rows,columns;
    printf("Input number of rows and columns");
    scanf("%d %d",&rows,&columns);
    int A[10][10],B[10][10],sum[10][10];
    printf("input elements of first matrix");
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<columns;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Input elements of second matrix");
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<columns;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<columns;j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("sum of the matrix:\n");
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<columns;j++)
        {
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}