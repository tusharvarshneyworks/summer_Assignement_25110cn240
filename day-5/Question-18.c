#include <stdio.h>

int main()
{
    int n,str=0,fac,d,i;
    printf("Enter the non negative integer: ");
    scanf("%d",&n);
    while(n<0){
        printf("INVALID INPUT\nA strong number should be non negative integer\n");
        printf("Enter the non negative integer: ");
        scanf("%d",&n);
    } 
    i=n;
    if(n==0){
        printf("Input number is strong number");
    }else{
        while (i>0){
            fac=1;
            d=i%10;
            for(int j=1;j<=d;j++){
                fac=fac*j;
            }
            str=str+fac;
            i=i/10;
        }
        if (str==n){
        printf("Input number is strong number");
        }else{
        printf("Input number is not a strong number");
        }
    }
    return 0;
}