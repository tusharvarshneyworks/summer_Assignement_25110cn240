#include <stdio.h>

int main()
{
    int n, d, product = 1;
    printf("Enter the natural number: ");
    scanf("%d",&n);
    if( n < 1){
        printf("INVALID INPUT");
    }else{
       while(n>0){
        d=n%10;
        product*=d;
        n=n/10;
       } 
       printf("product of digits is %d",product);
    }
    return 0;
}