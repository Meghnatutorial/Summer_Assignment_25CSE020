#include<stdio.h>
int main()
{
    int choice,tickets =50,num;
    do
    {
      printf("TICKET BOOKING SYSTEM\n");
      printf("1.Book ticket\n");
      printf("2.cancel ticket\n");
      printf("3.check available tickets\n");
      printf("4.Exit\n");
      printf("Input your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
        printf("Input number of tickets to book:");
        scanf("%d",&num);
        if(num>0&&num<=tickets)
        {
          tickets -=num;
          printf("%d tickets booked successfully.\n");
        }
        else
        {
          printf("tickets not available.\n");
        }
        break;
        case 2:
        printf("Input number of tickets to cancel:");
        scanf("%d",&num);
        if(num>0)
        {
          tickets +=num;
          printf("%d tickets cancelled successfully.\n",num);
        }
        else
        {
          printf("nvalid number of tickets.\n");
        }
        break;
        case 3:
         printf("available tickets:%d\n",tickets);
         break;
         case 4:
         printf("Thankyou for using the ticket booking system.\n");
         break;
         default:
         printf("Invalid choice!please try again.\n");
      }    
    } 
    while(choice !=4);
    return 0;
}