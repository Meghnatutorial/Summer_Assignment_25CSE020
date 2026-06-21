#include<stdio.h>
int main()
{
    char str[10];
    int len = 0;
    printf("Input the string");
    fgets(str,sizeof(str),stdin);
    while(str[len] !='\0'&& str[len] !='\n')
    {
        len++;
    }
    printf("length of string = %d",len);
    return 0;
}