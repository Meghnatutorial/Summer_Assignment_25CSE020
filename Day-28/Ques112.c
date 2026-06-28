#include<stdio.h>
#include<string.h>
int main()
{
    int choice;
    char name[50] ="";
    char phone[15] ="";
    do
    {
      printf("CONTACT MANAGEMENT SYSTEM\n");
      printf("1.Add contact\n");
      printf("2.Display contact\n");
      printf("3.Updated contact\n");
      printf("4.Exit\n");
      printf("Input your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
        printf("Input name:");
        scanf("%s",name);
        printf("Input phone number:");
        scanf("%s",phone);
        printf("contact added successfully.\n");
        break;
        case 2:
        if(strlen(name) ==0)
        {
            printf("no contact available.\n");
        }
        else
        {
            printf("contact details\n");
            printf("name:%s\n",name);
            printf("phone:%s\n",phone);
        }
        break;
        case 3:
        if(strlen(name) ==0)
        {
            printf("no contact to update.\n");
        }
        else
        {
            printf("Input new name:");
            scanf("%s",name);
            printf("Input new phone number:");
            scanf("%s",phone);
            printf("contact updated successfully.\n");
        }
        break;
        case 4:
        printf("Thankyou for using the contact management system.\n");
        break;
        default:
        printf("invalid choice!please try again.\n");
      }   
    } 
    while(choice !=4);
    return 0;
    
}