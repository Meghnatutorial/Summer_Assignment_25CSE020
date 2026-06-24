#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],longest[50];
    int i,len = 0,maxlen = 0,start = 0;
    printf("Input the sentence");
    fgets(str,sizeof(str),stdin);
    for(i=0;;i++)
    {
        if(str[i] !=' '&&str[i] !='\0'&&str[i] !='\n')
        {
            len++;
        }
        else{
            if(len>maxlen)
            {
                maxlen = len;
                strncpy(longest,&str[start],maxlen);
                longest[maxlen] = '\0';
            }
            len = 0;
            start=i+1;
        }
        if(str[i] =='\0')
        break;
    }
    printf("longest word:%s\n",longest);
    printf("length:%d\n",maxlen);
    return 0;
}