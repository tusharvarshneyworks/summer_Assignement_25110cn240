#include <stdio.h>

int main()
{
    int upper, lower, prime, d;
    printf("enter the upperand: ");
    scanf("%d",&upper);
    printf("enter the lowerand: ");
    scanf("%d",&lower);
    if (upper<1||lower<1||lower>upper){
        printf("INVALID INPUT\nupperand and lowerand should be natuaral number and,\nupperand is should be greater than lowerand");
    }else{
        printf("Prime number in range (%d,%d) is:\n",lower,upper);
        for(int i=lower+1; i<upper; i++){
            prime=1;
            for(int j=2; j<i; j++){
                d=i%j;
                if(d==0){
                    prime=0;
                    break;
                }
            }
            if(prime==1){
                printf("%d, ",i);
            }
        }
    }
    return 0;
}