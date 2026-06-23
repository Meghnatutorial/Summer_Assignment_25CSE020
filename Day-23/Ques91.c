#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int count[200]={0};
    int i;
    printf("Input the first string");
    scanf("%s",str1);
    printf("Input the second string");
    scanf("%s",str2);
    if(strlen(str1) !=strlen(str2))
    {
        printf("strings are not anagrams\n");
        return 0;
    }
    for(i = 0;str1[i] !='\0';i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    for(i = 0;i<200;i++)
    {
        if(count[i] !=0)
        {
            printf("strings are not anagrams\n");
            return 0;
        }
    }
    printf("strings are anagrams\n");
    return 0;
}