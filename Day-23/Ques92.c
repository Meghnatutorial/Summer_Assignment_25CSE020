#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  int count[200]={0};
  int i,max = 0;
  char maxchar;
  printf("Input the string");
  scanf("%s",str);
  for(i = 0;str[i] !='\0';i++)
  {
    count[(unsigned char)str[i]]++;
  }
  for(i = 0;str[i] !='\0';i++)
  {
    if(count[(unsigned char)str[i]]>max)
    {
        max=count[(unsigned char)str[i]];
        maxchar = str[i];
    }
  }
  printf("maximum occuring charcter:%c\n",maxchar);
  printf("frequency:%d\n",max);
  return 0;
}