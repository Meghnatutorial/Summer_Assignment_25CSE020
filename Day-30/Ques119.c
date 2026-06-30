#include<stdio.h>
int main()
{
    int n,i;
    printf("Input number of employees:");
    scanf("%d",&n);
    int empid[n];
    char name[n][10];
    float salary[n];
    for(i =0;i<n;i++)
    {
        printf("Input details of employee%d\n",i+1);
        printf("Input employee ID:");
        scanf("%d",&empid[i]);
        printf("Input employee name:");
        scanf("%s",name[i]);
        printf("Input salary:");
        scanf("%f",&salary[i]);
    }
    printf("Employee Records\n");
    for(i =0;i<n;i++)
    {
        printf("employee %d\n",i+1);
        printf("employee ID:%d\n",empid[i]);
        printf("employee name:%s\n",name[i]);
        printf("salary :%.2f\n",salary[i]);
    }
    return 0;
}