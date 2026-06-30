#include<stdio.h>
int roll[10],n;
char name[10][20];
float marks[100];
void addstudents()
{
    int i;
    printf("Input number of students:");
    scanf("%d",&n);
    for(i =0;i<n;i++)
    {
        printf("Input deatils of student %d\n,i+1");
        printf("Input roll number:");
        scanf("%d",&roll[i]);
        printf("Input name: ");
        scanf("%s",&name[i]);
        printf("Input marks:");
        scanf("%f",&marks[i]);
    }
}
void displaystudents()
{
    int i;
    printf("STUDENT RECORDS\n");
    for(i =0;i<n;i++)
    {
        printf("student %d\n",i+1);
        printf("roll number:%d\n",roll[i]);
        printf("name:%s\n",name[i]);
        printf("marks:%.2f\n",marks[i]);
    }
}
int main()
{
    addstudents();
    displaystudents();
    return 0;
}
