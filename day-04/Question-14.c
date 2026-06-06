#include<stdio.h>

int main()
{
    int a1=0,a2=1,an,n;
    printf("Enter the n(term number): ");
    scanf("%d",&n);
    while(n<1){
        printf("INVALID INPUT\nPlease Enter natural number for n: ");
        scanf("%d",&n);
    }
    printf("The nth term is ");
    if(n==1){
        printf("0");
    }else if(n==2){
        printf("1");
    }else{
        for(int i=0;i<n-2;i++){
            an=a1+a2;
            a1=a2;
            a2=an;
        }
        printf("%d",an);
    }
    return 0;
}