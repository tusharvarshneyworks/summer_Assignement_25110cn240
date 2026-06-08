#include<stdio.h>

int sum(int a,int b){
    int r;
    r=a+b;
    return r;
}

int main(){
    int a,b;
    printf("Enter the numbers:\n");
    scanf("%d %d",&a,&b);
    printf("The sum of the two numbers is %d",sum(a,b));
    return 0;
}