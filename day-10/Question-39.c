#include<stdio.h>

int main()
{
    int a;
    for(int i=0;i<5;i++){
        a=1;
        for(int j=0;j<4-i;j++){
            printf(" ");
        } 
        for(int j=0;j<i+1;j++){
            printf("%d",a);
            a++;
        }
        for(int k=i;k>0;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}