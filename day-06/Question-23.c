#include <stdio.h>

int main()
{
    int n,r,count=0;
    printf("Enter the decimal: ");
    scanf("%d",&n);
    while(n<1){
        printf("INVALID INPUT\n");
        printf("Enter the positive integer: ");
        scanf("%d",&n);
    }
    while(n>0){
        r=n%2;
        if(r==1){
            count++;
        }
        n=n/2;
    }
    printf("The no. of set bits is %d",count);
    return 0;
}