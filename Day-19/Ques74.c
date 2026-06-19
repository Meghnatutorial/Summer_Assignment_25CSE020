#include<stdio.h>
int main()
{
    int rows,columns;
    printf("Input number of rows and columns");
    scanf("%d %d",&rows,&columns);
    int A[10][10],B[10][10],sub[10][10];
    printf("Input elements of first matrix:\n");
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<columns;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Input elements of second matrix:\n");
    for(int i= 0;i<rows;i++)
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
            sub[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("subtraction of matrix:\n");
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<columns;j++)
        {
            printf("%d",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}