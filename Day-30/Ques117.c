#include<stdio.h>
int main()
{
    int n,i;
    printf("Input number of students:");
    scanf("%d",&n);
    int roll[n];
    char name[n][10];
    float marks[n];
    for(i =0;i<n;i++)
    {
        printf("Input details of student %d\n",i+1);
        printf("Input Roll number:");
        scanf("%d",&roll[i]);
        printf("Input Name:");
        scanf("%s",name[i]);
        printf("Input marks:");
        scanf("%f",&marks[i]);
    }
    printf("Student Records\n");
    for(i =0;i<n;i++)
    {
        printf("student %d\n",i+1);
        printf("Roll number:%d\n",roll[i]);
        printf("name:%s\n",name[i]);
        printf("Marks:%.2f\n",marks[i]);
    }
    return 0;
}