#include<stdio.h>
int main()
{
    char str[20];
    int i,j = 0;
    printf("Input a string");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i] !='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] ='\0';
    printf("string after removing spaces:%s",str);
    return 0;
}