#include<stdio.h>

int main()
{
    int n,maxf=0,ele;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        int count=0;

        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }

        if(count>maxf){
            maxf=count;
            ele=a[i];
        }
    }

    printf("Maximum frequency element = %d",ele);

    return 0;
}