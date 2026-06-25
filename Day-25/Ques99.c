#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][50],t[50];
    int n,i,j;
    printf("Input number of names");
    scanf("%d",&n);
    printf("Input names:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(t,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],t);
            }
        }
    }
    printf("names in alphabetical order:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}