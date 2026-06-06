#include<stdio.h>

int main()
{
    int a, b, k, r1, r2;
    printf("Enter the natural numbers:\n");
    scanf("%d %d",&a,&b);
    if(a<1||b<1){
        printf("INVALID INPUT");
    }else{
        if(a<b){
            k=a;
        }else{
            k=b;
        }
        for(int i=k; i>0; i--){
            r1=a%i;
            r2=b%i;
            if(r1==r2 && r1==0){
                printf("GCD of (%d,%d)is %d",a,b,i);
                break;
            }
        }
    }
    return 0;
}