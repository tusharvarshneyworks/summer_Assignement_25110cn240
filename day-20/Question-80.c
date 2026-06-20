#include<stdio.h>

int main()
{
    int r,c,sum;

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Column-wise sums:\n");

    for(int i=0;i<c;i++){
        sum=0;

        for(int j=0;j<r;j++){
            sum=sum+a[j][i];
        }

        printf("Column %d = %d\n",i+1,sum);
    }

    return 0;
}