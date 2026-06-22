#include<stdio.h>
int main()
{
    char str[20],ch;
    int i,count = 0;
    printf("Input the string");
    fgets(str,sizeof(str),stdin);
    printf("Input the character to find frequency");
    scanf(" %c",&ch);
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ch)
        count++;
    }
    printf("frequency of '%c' = %d",ch,count);
    return 0;
}