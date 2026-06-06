#include<stdio.h>

int main()
{
    char arr[]="ABCDE";
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            printf("%c",arr[j]);
        }
        printf("\n");
    }
    return 0;
}