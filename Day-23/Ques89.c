#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int count[200] = {0};
    int i;
    printf("Input the string");
    fgets(str,sizeof(str),stdin);
    for(i = 0;str[i] !='\0';i++)
    {
        count[(unsigned char)str[i]]++;
    }
    for(i = 0;str[i] !='\0';i++)
    {
        if(count[(unsigned char)str[i]] == 1)
        {
            printf("first non repeating characte:%c\n",str[i]);
            return 0;
        }
    }
    printf("no non repeating character found\n");
    return 0;
}