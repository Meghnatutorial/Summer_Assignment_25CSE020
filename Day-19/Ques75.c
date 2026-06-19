#include<stdio.h>
int main()
{
    int rows,columns;
    printf("Input number of rows and columns:");
    scanf("%d %d",&rows,&columns);
    int A[10][10];
    printf("Input elements of matrix:\n");
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<columns;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("transpose of matrix:\n");
    for(int i = 0;i<columns;i++)
    {
        for(int j = 0;j<rows;j++)
        {
            printf("%d",A[j][i]);
        }
        printf("\n");
    }
    return 0;
}