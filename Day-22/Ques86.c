#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count = 1;
    printf("Input a sentence");
    fgets(str,sizeof(str),stdin);
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ' ')
        count++;
    }
    printf("number of words = %d",count);
    return 0;
}