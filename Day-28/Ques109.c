#include<stdio.h>
int main()
{
    int choice;
    int totalbooks =10;
    int issuedbooks =0;
    do
    {
        printf("\nLIBRARY MANAGEMENT SYSTEM");
        printf("1.Add Books\n");
        printf("2.Issue Books\n");
        printf("3.Return Books\n");
        printf("4.Display Available Books\n");
        printf("5.Exit\n");
        printf("Input your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int add;
                printf("Input number of books to add:");
                scanf("%d",add);
                totalbooks +=add;
                printf("%d books added successfully.\n",add);
                break;
            }
            case 2:
            if(totalbooks>0)
            {
               totalbooks--;
               issuedbooks++;
               printf("book issued successfully.\n");         
            }
            else
            {
              printf("no books available.\n");
            }
            break;
            case 3:
            if(issuedbooks>0)
            {
                totalbooks++;
                issuedbooks--;
                printf("books returned successfully.\n");
            }
            else
            {
                printf("no books are issued.\n");
            }
            break;
            case 4:
            printf("available books:%d\n",totalbooks);
            printf("issued books:%d\n",issuedbooks);
            break;
            case 5:
            printf("Thankyou for using the library Management system.\n");
            break;
            default:
            printf("invalid choice!please try again.\n");
        }
    } 
     while(choice !=5);
     return 0;
    
}