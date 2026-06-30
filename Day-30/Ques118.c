#include<stdio.h>
int main()
{
    int n,i;
    printf("Input number of books:");
    scanf("%d",&n);
    int bookid[n];
    char title[n][10];
    char author[n][10];
    for(i =0;i<n;i++)
    {
        printf("Input details of book %d\n",i+1);
        printf("Input book ID:");
        scanf("%d",&bookid[i]);
        printf("Input book title:");
        scanf("%s",title[i]);
        printf("Input Author name:");
        scanf("%s",author[i]);
    }
    printf("LIBRARY RECORDS\n");
    for(i =0;i<n;i++)
    {
        printf("book %d\n",i+1);
        printf("book ID:%d\n",bookid[i]);
        printf("book title:%s\n",title[i]);
        printf("Author name:%s\n",author[i]);
    }
    return 0;
}