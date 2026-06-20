#include<stdio.h>

int main()
{
    int n,sum=0;

    printf("Enter the order of square matrix: ");
    scanf("%d",&n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        sum=sum+a[i][i];
    }

    printf("Diagonal sum = %d",sum);

    return 0;
}