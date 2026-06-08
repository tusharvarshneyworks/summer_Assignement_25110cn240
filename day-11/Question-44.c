#include<stdio.h>

int factorial(int a){
    int r=1;
    for(int i=1;i<=a;i++){
        r=r*i;
    }
    return r;
}

int main(){
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("The factorial of the two numbers is %d",factorial(a));
    return 0;
}