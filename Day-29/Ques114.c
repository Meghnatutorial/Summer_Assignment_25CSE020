#include<stdio.h>
int main()
{
    int a[10],n,i,choice,sum =0,max,min;
    printf("Input the number of elements:");
    scanf("%d",&n);
    printf("Input %d elements:\n",n);
    for(i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {
      printf("MENU\n");
      printf("1.Display Array\n");
      printf("2.Find Sum\n");
      printf("3.Find maxmium\n");
      printf("4.Find minimum\n");
      printf("5.Exit\n");
      printf("Input your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
        printf("Array elements:");
        for(i =0;i<n;i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");
        break;
        case 2:
        sum =0;
        for(i =0;i<n;i++)
        {
            sum +=a[i];
        }
        printf("Sum =%d\n",sum);
        break;
        case 3:
        max =a[0];
        for(i =1;i<n;i++)
        {
            if(a[i]>max)
            max = a[i];
        }
        printf("maximum = %d\n",max);
        break;
        case 4:
        min = a[0];
        for(i =1;i<n;i++)
        {
            if(a[i]<min)
            min = a[i];
        }
        printf("minimum = %d\n",min);
        break;
        case 5:
        printf("Exiting program\n");
        break;
        default:
        printf("invalid choice!\n");
      }
    }
    while(choice !=5);
    return 0;
    
}