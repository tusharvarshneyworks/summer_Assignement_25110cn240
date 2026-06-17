#include<stdio.h>

int main()
{
    int n,sum=0,total=0;

    printf("Enter value of n: ");
    scanf("%d",&n);

    int a[n-1];

    printf("Enter %d elements:\n",n-1);

    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    total=n*(n+1)/2;

    printf("Missing number = %d",total-sum);

    return 0;
}