#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,j,f = 0;
    printf("Input the string");
    fgets(str,sizeof(str),stdin);
    i = strlen(str);
    if(str[i -1] == '\n')
      str[i - 1] = '\0';
    i = strlen(str);
    for(j = 0;i = i-1;j<i,j++,i--)
    {
        if(str[j] != str[i])
        {
            f = 1;
            break;
        }
    }    
      if(f == 0)
       printf("palindrome");
    else
        printf("not palindrome");
      return 0;
}