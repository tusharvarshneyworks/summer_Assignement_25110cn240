#include <stdio.h>

int main()
{
    int n,d;
    printf("Enter the positive integer: ");
    scanf("%d",&n);
    while(n<1){
        printf("INVALID INPUT\n");
        printf("Enter the positive integer: ");
        scanf("%d",&n);
    }
    printf("factor of %d are ",n);
    for(int i=1;i<=n;i++){
        d=n%i;
        if (d==0){
            printf("%d  ",i);
        }
    }
    return 0;
}