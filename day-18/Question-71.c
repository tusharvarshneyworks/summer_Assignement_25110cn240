#include<stdio.h>

int main()
{
    int n,key;

    printf("Enter size of sorted array: ");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&key);

    int low=0,high=n-1,mid;

    while(low<=high){
        mid=(low+high)/2;

        if(a[mid]==key){
            printf("Element found at index %d",mid);
            return 0;
        }
        else if(key>a[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    printf("Element not found");

    return 0;
}