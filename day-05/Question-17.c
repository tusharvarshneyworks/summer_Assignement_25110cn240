#include <stdio.h>

int main()
{
    int n,fac=0,d;
    printf("Enter the positive integer: ");
    scanf("%d",&n);
    while(n<1){
        printf("INVALID INPUT\nA perfect number should be positive integer\n");
        printf("Enter the positive integer: ");
        scanf("%d",&n);
    }
    for(int i=1;i<n;i++){
        d=n%i;
        if (d==0){
            fac+=i;
        }
    }
    if (fac==n){
        printf("Input number is perfect number");
    }else{
        printf("Input number is not a perfect number");
    }
    return 0;
}