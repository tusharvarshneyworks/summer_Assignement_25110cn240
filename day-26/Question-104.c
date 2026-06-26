#include<stdio.h>

int main()
{
    int ans,score=0;

    printf("******** QUIZ APPLICATION ********\n");

    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);

    if(ans==2){
        printf("Correct!\n");
        score++;
    }else{
        printf("Wrong! Correct Answer: New Delhi\n");
    }

    printf("\nQ2. Which language is used for C programming?\n");
    printf("1. Compiler\n");
    printf("2. Python\n");
    printf("3. C\n");
    printf("4. Java\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);

    if(ans==3){
        printf("Correct!\n");
        score++;
    }else{
        printf("Wrong! Correct Answer: C\n");
    }

    printf("\nQ3. How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("4. 8\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);

    if(ans==3){
        printf("Correct!\n");
        score++;
    }else{
        printf("Wrong! Correct Answer: 7\n");
    }

    printf("\nQ4. Which planet is known as the Red Planet?\n");
    printf("1. Mars\n");
    printf("2. Venus\n");
    printf("3. Earth\n");
    printf("4. Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);

    if(ans==1){
        printf("Correct!\n");
        score++;
    }else{
        printf("Wrong! Correct Answer: Mars\n");
    }

    printf("\nQ5. What is 15 + 10?\n");
    printf("1. 20\n");
    printf("2. 25\n");
    printf("3. 30\n");
    printf("4. 35\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);

    if(ans==2){
        printf("Correct!\n");
        score++;
    }else{
        printf("Wrong! Correct Answer: 25\n");
    }

    printf("\n******** RESULT ********\n");
    printf("Your Score = %d/5\n",score);

    if(score==5){
        printf("Excellent!");
    }
    else if(score>=3){
        printf("Good Job!");
    }
    else{
        printf("Keep Practicing!");
    }

    return 0;
}