#include<stdio.h>
int main()
{
    char name[50];
    int roll;
    int m1,m2,m3,m4,m5;
    int total;
    float percentage;
    char grade;
    printf("Marksheet Generation System\n");
    printf("Enter student name:");
    scanf("%s",name);
    printf("Enter Roll number:");
    scanf("%d",&roll);
    printf("Enter Marks:\n");
    printf("chemistry:");
    scanf("%d",&m1);
    printf("Mathematics II:");
    scanf("%d",&m2);
    printf("electronics:");
    scanf("%d",&m3);
    printf("soft skills:");
    scanf("%d",&m4);
    printf("mechanical:");
    scanf("%d",&m5);
    total =m1+m2+m3+m4+m5;
    percentage= total/5.0;
    if(percentage>=90)
    grade ='A';
    else if(percentage>=75)
    grade ='B';
    else if(percentage>=60)
    grade ='C';
    else if(percentage>=40)
    grade = 'D';
    else
    grade ='F';
    printf("\n MARKSHEET:");
    printf("Student Name:%s\n",name);
    printf("Roll number:%d\n",roll);
    printf("Total Marks:%d/500\n",total);
    printf("Percentage:%.2f%%\n",percentage);
    printf("Grade:%c\n",grade);
    if(grade =='F')
    printf("Result:Fail\n");
    else
    printf("Result:Pass\n");
    return 0;
}