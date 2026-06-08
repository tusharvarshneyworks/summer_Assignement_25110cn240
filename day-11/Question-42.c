#include<stdio.h>

int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int a,b;
    printf("Enter the numbers:\n");
    scanf("%d %d",&a,&b);
    printf("The maximum number between two numbers is %d",max(a,b));
    return 0;
}