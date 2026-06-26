#include<stdio.h>
int main()
{
    int choice;
    float balance = 10000.0,amount;
    do
    {
      printf("\n ATM MENU");
      printf("1.check balance\n");
      printf("2.deposit money\n");
      printf("3.withdraw money\n");
      printf("4.exit\n");
      printf("Input your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
        printf("Available balance = %2.2f\n",balance);
        break;
        case 2:
        printf("Input amount to deposit:");
        scanf("%f",&amount);
        balance +=amount;
        printf("deposit successful!\n");
        printf("updated balance = %.2f\n",balance);
        break;
        case 3:
        printf("Input the amount to withdraw:");
        scanf("%f",&amount);
        if(amount <=balance)
        {
            balance -=amount;
            printf("withdrawal sucessfull!\n");
            printf("remaining balance = %.2f\n",balance);
        }
        else
        {
            printf("insufficient balance!\n");
        }   
        break;
        case 4:
        printf("Thank you for using the ATM.\n");
        break;
        default:
        printf("Invalid choice!\n");
       }
    }
    
    while(choice != 4);
    return 0;
    
}