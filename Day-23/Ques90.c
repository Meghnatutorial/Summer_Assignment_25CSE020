#include<stdio.h>
int main()
{
    char str[100];
    int count[200] = {0};
    int i;
    printf("Input the string");
    scanf("%s",str);
    for(i = 0;str[i] !='\0';i++)
    {
        count[(unsigned char)str[i]]++;
        if(count[(unsigned char)str[i]]==2)
        {
            printf("first repeating character:%c\n",str[i]);
            return 0;
        }
    }
    printf("no repeating character found\n");
    return 0;
}