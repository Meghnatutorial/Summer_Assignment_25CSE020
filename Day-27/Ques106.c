#include<stdio.h>
int main()
{
  int choice;
  int id[100],salary[100];
  char name[100][50];
  int n= 0,i,searchid;
  do
  {
    printf("\n Employee management system");
    printf("1.Add Employee\n");
    printf("2.Display all Employee\n");
    printf("3.Search Employee by ID\n");
    printf("4.Exit\n");
    printf("Input your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Input Employee ID:");
        scanf("%d",&id[n]);
        printf("Input Employee name:");
        scanf("%s",name[n]);
        printf("Input salary:");
        scanf("%d",&salary[n]);
        n++;
        printf("Employee record added successfully!\n");
        break;
        case 2:
        if(n ==0)
        {
            printf("no employee records found!\n");
        }
        else{
            printf("\nID\tName\tSalary\n");
            for(i =0;i<n;i++)
            {
                printf("%d\t%s\t%d\n",id[i],name[i],salary[i]);
            }
        }
        break;
        case 3:
        printf("Input Employee ID to search:");
        scanf("%d",&searchid);
        for(i =0;i<n;i++)
        {
            if(id[i] == searchid)
            {
                printf("\nEmployee found!\n");
                printf("Employee ID:%d\n",id[i]);
                printf("name:%s\n",name[i]);
                printf("Salary:%d\n",salary[i]);
                break;
            }
        }
        if(i ==n)
        {
            printf("Employee record not found!\n");
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