#include <stdio.h>

int main()
{
    int n, i, d, rev = 0;
    printf("Enter the non negative number: ");
    scanf("%d",&n);
    i=n;
    if( n < 0){
        printf("INVALID INPUT");
    }else if(n==0){
        printf("Input number is Palindrome no.");
    }else{
        while(i>0){
            d=i%10;
            rev=rev*10+d;
            i=i/10;
        }
        if(n==rev){
            printf("Input number is Palindrome no.");
        }else{
            printf("Input number is not a Palindrome no.");
        }
    }
    return 0;
}