#include <stdio.h>

int main()
{
    int n,r,bin=0;
    printf("Enter the decimal: ");
    scanf("%d",&n);
    while(n<1){
        printf("INVALID INPUT\n");
        printf("Enter the positive integer: ");
        scanf("%d",&n);
    }
    printf("Input number in binary is ");
    while(n>0){
        r=n%2;
        bin=bin*10+r;
        n=n/2;
    }
    printf("%d",bin);
    return 0;
}