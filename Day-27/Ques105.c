#include<stdio.h>
int main()
{
    int choice;
    int roll[10],marks[10];
    char name[10][50];
    int n= 0,i,searchRoll;
    do
    {
       printf("\n student record management system\n");
       printf("1.Add Student\n");
       printf("2.Display all students\n");
       printf("3.Search Student by Roll number\n");
       printf("4.Exit\n");
       printf("Input your choice:");
       scanf("%d",&choice);
       switch(choice)
       {
        case 1:
        printf("Input the roll number:");
        scanf("%d",&roll[n]);
        printf("Input Name:");
        scanf("%s",name[n]);
        printf("Input Marks:");
        scanf("%d",&marks[n]);
        n++;
        printf("Student record added successfully!\n");
        break;
        case 2:
        if(n ==0)
        {
            printf("no student records found!\n");
        }
        else{
            printf("\nRoll\tName\tMarks\n");
            for(i=0;i<n;i++)
            {
                printf("%d\t%s\t%d\n",roll[i],name[i],marks[i]);
            }
        }
        break;
        case 3:
        printf("Input Roll number to search:");
        scanf("%d",&searchRoll);
        for(i=0;i<n;i++)
        {
            if(roll[i] ==searchRoll)
            {
                printf("\nStudent found\n");
                printf("Roll number:%d\n",roll[i]);
                printf("Name:%s\n",name[i]);
                printf("Marks:%d\n",marks[i]);
                break;
            }
        }
        if(i ==n)
        {
            printf("Student record not found!\n");
        }
        break;
        case 4:
        printf("Exiting program\n");
        break;
        default:
        printf("Invalid choice!please try again\n");
       }
    }
    while(choice !=4);
    return 0;
    
}