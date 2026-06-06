#include <stdio.h>

int main()
{
    int n, i,count = 0;
    printf("Enter the positive number: ");
    scanf("%d",&n);
    while(n<1){
        printf("INVALID INPUT\nPlease enter the postive integer: ");
        scanf("%d",&n);
    }
    i=n;
    while(i>0){
        count=count+1;
        i=i/10;
    }
    printf("The number of digits in %d is %d",n ,count);
    return 0;
}