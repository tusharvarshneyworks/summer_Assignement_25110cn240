#include <stdio.h>

int main()
{
    int n, multi;
    printf("Enter the positive integer: ");
    scanf("%d",&n);
    if (n < 1){
        printf("Invalid input\n");
    }else{
        printf("Multiplication Table of given number: \n");
        for(int i =1; i < 11; i++){
            multi=n*i;
            printf("%d*%d=%d\n", n, i, multi);
        }
    }
    return 0;
}