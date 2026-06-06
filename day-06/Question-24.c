#include<stdio.h>

int main()
{
    int x,exp,r=1;
    printf("Enter the x: ");
    scanf("%d",&x);
    printf("Enter the exponent of x(n): ");
    scanf("%d",&exp);
    if (exp>0){
        for(int i=0;i<exp;i++){
            r=r*x;
        }
        printf("The value of x^n is %d",r);
    }else if(exp==0 && x!=0){
        r=1;
        printf("The value of x^n is %d",r);
    }else if(exp==0 && x==0){
        printf("The value of x^n is NOT DEFINED");
    }else{
        float k,j=1;
        k=1.0/x;
        for(int i=0;i<-exp;i++){
            j=j*k;
        }
        printf("The value of x^n is %f",j);
    }
    return 0;
}