#include<stdio.h>
struct item
{
    int id;
    char name[50];
    int quantity;
    float price;
};
int main()
{
    struct item item[10];
    int n,i;
    printf("Input number of items:");
    scanf("%d",&n);
    for(i =0;i<n;i++)
    {
        printf("Input details of item %d\n",i+1);
        printf("item ID:");
        scanf("%d",&item[i].id);
        printf("item name:");
        scanf("%s",&item[i].name);
        printf("quantity:");
        scanf("%d",&item[i].quantity);
        printf("price:");
        scanf("%f",&item[i].price);
    }
    printf("INVENTORY DETAILS\n");
    printf("ID\tname\tquantity\tprice\n");
    for(i =0;i<n;i++)
    {
        printf("%d\t%s\t%d\t\t%.2f\n",item[i].id,item[i].name,item[i].quantity,item[i].price);
    }
    return 0;
}