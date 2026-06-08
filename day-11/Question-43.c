#include<stdio.h>

void prime(int a){
    int r,prime=1;
    if(a==1){
        prime=0;
    }else{
        for(int i=2;i<a;i++){
            r=a%i;
            if(r==0){
                prime=0;
                break;
            }
        }
    }
    if(prime==1){
        printf("Input number is prime");
    }else{
        printf("Input number is not prime");
    }
}

int main(){
    int a;
    printf("Enter the natural number: ");
    scanf("%d",&a);
    prime(a);
    return 0;
}