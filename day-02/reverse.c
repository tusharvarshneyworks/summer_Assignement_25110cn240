#include <stdio.h>

int main()
{
    int n, d, rev = 0;
    printf("Enter the natural number: ");
    scanf("%d",&n);
    if( n < 1){
        printf("INVALID INPUT");
    }else{
        while(n>0){
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        printf("reverse of number is %d",rev);
    }
    return 0;
}