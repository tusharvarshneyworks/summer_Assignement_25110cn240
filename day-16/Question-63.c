#include<stdio.h>

int main()
{
    int n,sum;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter required sum: ");
    scanf("%d",&sum);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("%d %d\n",a[i],a[j]);
            }
        }
    }

    return 0;
}