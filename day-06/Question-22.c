#include <stdio.h>
#include <math.h>

int main()
{
    int n,r,a=0,dec=0,i;
    printf("Enter the binary number: ");
    scanf("%d",&n);
    if(n<=0){
        while(n<1){
        printf("INVALID INPUT\n");
        printf("Enter the binary number: ");
        scanf("%d",&n);
        }
    }
    i=n;
    while(i>0){
        r=i%10;
        i=i/10;
        if(r==0 || r==1){
            continue;
        }
        printf("INVALID INPUT\n");
        printf("Enter the binary number: ");
        scanf("%d",&i);
        n=i;
    }    
    printf("Input number in decimal is ");
    while(n>0){
        r=n%10;
        dec=dec+r*pow(2,a);
        a=a+1;
        n=n/10;
    }
    printf("%d",dec);
    return 0;
}