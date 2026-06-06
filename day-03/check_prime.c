#include <stdio.h>

int main()
{
    int n, r, prime=1;
    printf("Enter the natural number: ");
    scanf("%d",&n);
    if(n<1){
        printf("INVALID INPUT");
    }else if(n==1){
        printf("Input number is not a prime");
    }else{
        for(int i=2; i<n; i++){
            r=n%i;
            if(r==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("Input number is prime");
        }else{
            printf("Input number is not a prime");
        }
    }
    return 0;
}