#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num,guess,attempt=0;

    srand(time(NULL));
    num=rand()%100+1;

    printf("Guess the number between 1 and 100\n");

    do{
        printf("Enter your guess: ");
        scanf("%d",&guess);

        attempt++;

        if(guess>num){
            printf("Too High\n");
        }
        else if(guess<num){
            printf("Too Low\n");
        }
        else{
            printf("Congratulations!\n");
            printf("You guessed the number in %d attempts.",attempt);
        }

    }while(guess!=num);

    return 0;
}