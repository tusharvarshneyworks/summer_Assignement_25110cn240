#include<stdio.h>

int main()
{
    int a=0;
    char arr[]="ABCDE";
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            printf("%c",arr[a]);
        }
        a++;
        printf("\n");
    }
    return 0;
}