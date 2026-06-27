#include<stdio.h>
int main()
{
    int choice;
    int id[100];
    char name[10][50];
    float basic[100],hra[100],da[100],total[100];
    int n =0,i,searchid;
    do
    {
      printf("\n Salary management system");
      printf("1.Add Employee salary\n");
      printf("2.Display all salary\n");
      printf("3.Search salary by employee ID\n");
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
        printf("Input basic salary:");
        scanf("%f",&basic[n]);
        hra[n] =basic[n]*0.20;
        da[n] =basic[n]*0.10;
        total[n] =basic[n] +hra[n]+da[n];
        printf("Salary record added successfully!\n");
        n++;
        break;
        case 2:
        if(n ==0)
        {
            printf("no salary records found!\n");
        }
        else
        {
          printf("\nID\tname\tbasic\tHRA\ttotal\n");
          for(i =0;i<n;i++)
          {
            printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",id[i],name[i],basic[i],hra[i],da[i],total[i]);
          }
        }
        break;
        case 3:
        printf("Input Employee ID to search:");
        scanf("%d",&searchid);
        for(i =0;i<n;i++)
        {
            if(id[i] ==searchid)
            {
                printf("\nEmployee found!\n");
                printf("ID:%d\n",id[i]);
                printf("name:%s\n",name[i]);
                printf("basic salary:%.2f\n",basic[i]);
                printf("HRA:%.2f\n",hra[i]);
                printf("DA:%.2f\n",da[i]);
                printf("total salary:%.2f\n",total[i]);
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
        printf("invalid choice!\n");
      }
    } 
    while(choice!=4);
    return 0;
    
}