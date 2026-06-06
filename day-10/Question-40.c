#include<stdio.h>

int main()
{
    char arr[]="ABCDE";
    for(int i=0;i<5;i++){
        for(int j=0;j<4-i;j++){
            printf(" ");
        } 
        for(int j=0;j<i+1;j++){
            printf("%c",arr[j]);
        }
        for(int k=i;k>0;k--){
            printf("%c",arr[k-1]);
        }
        printf("\n");
    }
    return 0;
}