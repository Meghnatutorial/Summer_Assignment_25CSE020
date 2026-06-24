#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,count;
    printf("Input the string");
    scanf("%s",str);
    for(i=0;str[i] !='\0';i++)
    {
        count = 1;
        while(str[i] == str[i+1])
        {
            count++;
            i++;
        }
        printf("%c%d",str[i],count);
    }
    return 0;
}