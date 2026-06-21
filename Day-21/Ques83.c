#include<stdio.h>
int main()
{
    char str[10];
    int i = 0,vowels = 0,consonants = 0;
    printf("Input the string");
    fgets(str,sizeof(str),stdin);
    while(str[i] != '\0' && str[i] != '\n')
    {
        if((str[i] >= 'A' && str[i] <= 'Z')||
            (str[i] >= 'a' && str[i] <= 'z'))
            {
                if(str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]== 'O' || str[i]=='U' ||
                str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
                {
                    vowels++;
                }
                else
                {
                  consonants++;
                }
            }
            i++;
    }
    printf("number of vowels = %d\n",vowels);
    printf("number of consonants = %d\n",consonants);
    return 0;
}