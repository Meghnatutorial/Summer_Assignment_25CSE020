#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,attempts = 0;
    srand(time(0));
    number = rand() %100 + 1;
    printf("number guessing game\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("try to guess it!\n");
    do
    {
        printf("Input your guess:");
        scanf("%d",&guess);
        attempts++;
        if(guess>number)
        printf("too high!try again.\n");
        else if(guess<number)
        printf("too low!try again.\n");
        else
        printf("\ncongratulations! you guessed the number in %d attempts.\n",attempts);
    }
    while(guess !=number);
    return 0;
    
}