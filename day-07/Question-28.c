#include <stdio.h>

int rev = 0;

int reverseNumber(int n)
{
    if (n == 0)  // Base case
        return rev;
    rev = rev * 10 + (n % 10);
    return reverseNumber(n / 10);
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0){
        printf("INVALID INPUT");
    }else{
        printf("Reversed number = %d", reverseNumber(n));
    }
    return 0;
}