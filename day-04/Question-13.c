#include<stdio.h>

int main()
{
    int a1=0,a2=1,an,n;
    printf("Enter the no. of terms you want to in Fibonacci series: ");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    if(n==1){
        printf("0");
    }else if(n==2){
        printf("0, 1");
    }else if(n<1){
        printf("INVALID INPUT");
    }else{
        printf("0, 1, ");
        for(int i=0;i<n-2;i++){
            an=a1+a2;
            printf("%d, ",an);
            a1=a2;
            a2=an;
        }
    }
    return 0;
}