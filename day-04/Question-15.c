#include <stdio.h>

int main()
{
    int n, i, d, arm=0;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    while(n<1){
        printf("INVALID INPUT\nPlease Enter natural number: ");
        scanf("%d",&n);
    }
    i=n;
    while(i>0){
        d=i%10;
        arm=arm+d*d*d;
        i=i/10;
    }
    if (arm==n){
        printf("Input number is Armstrong number");
    }else{
        printf("Input number is not a Armstrong number");
    }
    return 0;
}