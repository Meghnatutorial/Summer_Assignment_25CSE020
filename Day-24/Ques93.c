#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],t[200];
    printf("Input the first string");
    scanf("%s",str1);
    printf("Input the second string");
    scanf("%s",str2);
    if(strlen(str1) !=strlen(str2))
    {
        printf("strings are not rotation of each other\n");
        return 0;
    }
    strcpy(t,str1);
    strcat(t,str1);
    if(strstr(t,str2))
     printf("strings are rotations of each other\n");
    else
     printf("strings are not rotations of each other\n");
     return 0;
}