#include <stdio.h>

int main()
{
    int n, fac = 1;
    printf("Enter the non-negative integer: ");
    scanf("%d",&n);
    while(n<0){
        printf("INVALID INPUT\nPlease enter the non-negative integer: ");
        scanf("%d",&n);
    }
    if (n==0||n==1){
        printf("The factorial of %d is 1",n);
    } else{
        for(int i=1; i<=n; i++){
            fac=fac*i;
        }
        printf("The factorial of %d is %d",n ,fac);
    }
    return 0;
}