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

    temp=a[0];

    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }

    a[n-1]=temp;

    printf("Array after left rotation:\n");

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}