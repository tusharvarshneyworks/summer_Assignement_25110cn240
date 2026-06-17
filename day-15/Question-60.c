#include<stdio.h>

int main()
{
    int n,k=0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int a[n],b[n];

    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        if(a[i]!=0){
            b[k]=a[i];
            k++;
        }
    }

    while(k<n){
        b[k]=0;
        k++;
    }

    printf("Array after moving zeroes:\n");

    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }

    return 0;
}