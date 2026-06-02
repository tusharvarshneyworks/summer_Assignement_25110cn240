#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    sum = 0;
    if (n == 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
    }else{
        for(int i= 1; i <= n; i++){
            sum = sum + i;
        }  
        printf("Sum of the first %d natural numbers = %d\n", n, sum);
    }
    return 0;
}