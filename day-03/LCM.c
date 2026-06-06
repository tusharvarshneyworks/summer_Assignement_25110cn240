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
            k=b;
        }else{
            k=a;
        }
        for(int i=k; ; i++){
            r1=i%a;
            r2=i%b;
            if(r1==r2 && r1==0){
                printf("LCM of (%d,%d)is %d",a,b,i);
                break;
            }
        }
    }
    return 0;
}