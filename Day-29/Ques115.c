#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int choice;
    printf("Input a string:");
    scanf("%[^\n]",str);
    do
    {
        printf("MENU\n");
        printf("1.Display String\n");
        printf("2.Find length\n");
        printf("3.reverse string\n");
        printf("4.convert to uppercase\n");
        printf("5.Exit\n");
        printf("Input your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("string:%s\n",str);
            break;
            case 2:
            printf("length =%lu\n",strlen(str));
            break;
            case 3:
            {
                char t[10];
                strcpy(t,str);
                strrev(t);
                printf("reversed string:%s\n",t);
                break;
            }
            case 4:
            {
                char t[10];
                int i;
                strcpy(t,str);
                for(i =0;t[i] !='\0';i++)
                {
                    if(t[i] >='a'&&t[i]<='z')
                    t[i] = t[i]-32;
                }
                printf("uppercase string:%s\n",t);
                break;
            }
            case 5:
            printf("Exitising program\n");
            break;
            default:
            printf("invalid choice!\n");
        }
    } 
    while(choice != 5);
    return 0;
    
}