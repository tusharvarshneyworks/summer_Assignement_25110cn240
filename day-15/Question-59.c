#include<stdio.h>

int main()
{
    int n,temp;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    temp=a[n-1];

    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }

    a[0]=temp;

    printf("Array after right rotation:\n");

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}