#include<stdio.h>
int main()
{
    int choice;
    float balance =1000.0,amount;
    do
    {
    printf("BANK ACCOUNT SYSTEM\n");
    printf("1.Deposite Money\n");
    printf("2.Withdraw money\n");
    printf("3.check Balance\n");
    printf("4.Exit\n");
    printf("Input your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Input amount to deposit:");
        scanf("%f",&amount);
        if(amount>0)
        {
            balance +=amount;
            printf("Rs.%.2f deposited successfully.\n",amount);
        }
        else
        {
            printf("invalid amount.\n");
        }
        break;
        case 2:
        printf("Input amount to withdraw:");
        scanf("%f",&amount);
        if(amount<=balance&&amount>0)
        {
            balance -=amount;
            printf("Rs.%.2f withdrawn successfully.\n",amount);
        }
        else
        {
          printf("insufficient balance or inavalid amount.\n");
        }
        break;
        case 3:
        printf("current balance:Rs.%.2f\n",balance);
        break;
        case 4:
        printf("Thankyou for using the bank account system.\n");
        break;
        default:
        printf("inavlid choice!please try again.\n");
    }
    } 
    while(choice != 4);
    return 0;
    
}