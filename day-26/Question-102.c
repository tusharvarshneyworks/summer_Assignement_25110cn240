#include<stdio.h>

int main()
{
    int age;

    printf("******** Voting Eligibility System ********\n");

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age<0){
        printf("Invalid Age");
    }
    else if(age>=18){
        printf("Congratulations!\n");
        printf("You are eligible to vote.");
    }
    else{
        printf("Sorry!\n");
        printf("You are not eligible to vote.\n");
        printf("You can vote after %d year(s).",18-age);
    }

    return 0;
}