#include <stdio.h>

int main()
{
    int n, d, sum = 0;
    printf("Enter the natural number: ");
    scanf("%d",&n);
    if( n < 1){
        printf("INVALID INPUT\n");
    }else{
        while(n>0){
            d=n%10;
            sum+=d;
            n=n/10;
       }
       printf("sum of digits is %d",sum);
    }
}