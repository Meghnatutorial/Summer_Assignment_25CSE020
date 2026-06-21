#include<stdio.h>
int main()
{
    char str[10];
    int len = 0,i;
    printf("input the string");
    fgets(str,sizeof(str),stdin);
    while(str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }
    printf("reversed string");
    for(i = len-1;i >= 0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}