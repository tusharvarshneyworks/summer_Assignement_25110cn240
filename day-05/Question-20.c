#include <stdio.h>

int main()
{
    int n,d,prime,a;
    printf("Enter the positive integer: ");
    scanf("%d",&n);
    while(n<1){
        printf("INVALID INPUT\n");
        printf("Enter the positive integer: ");
        scanf("%d",&n);
    }
    for(int i=n;i>0;i--){
        prime=1;
        d=n%i;
        if(d==0){
            for(int j=2;j<i;j++){
                a=i%j;
                if(a==0){
                    prime=0;
                    break;
                }
            }
        }
        if(prime==1 && d==0){
                printf("Largest prime factor is %d",i);
                break;
            }
    }
    return 0;
}