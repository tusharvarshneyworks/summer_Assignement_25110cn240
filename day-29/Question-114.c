#include<stdio.h>

int main()
{
    int n,choice,pos,value,key;
    int sum,largest,smallest;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    do
    {
        printf("\n========== ARRAY OPERATIONS ==========\n");
        printf("1. Display Array\n");
        printf("2. Find Sum and Average\n");
        printf("3. Find Largest and Smallest Element\n");
        printf("4. Search an Element\n");
        printf("5. Insert an Element\n");
        printf("6. Delete an Element\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Array Elements:\n");

                for(int i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }

                printf("\n");
                break;

            case 2:

                sum=0;

                for(int i=0;i<n;i++)
                {
                    sum=sum+a[i];
                }

                printf("Sum = %d\n",sum);
                printf("Average = %.2f\n",(float)sum/n);

                break;

            case 3:

                largest=a[0];
                smallest=a[0];

                for(int i=1;i<n;i++)
                {
                    if(a[i]>largest)
                        largest=a[i];

                    if(a[i]<smallest)
                        smallest=a[i];
                }

                printf("Largest Element = %d\n",largest);
                printf("Smallest Element = %d\n",smallest);

                break;

            case 4:

                printf("Enter element to search: ");
                scanf("%d",&key);

                for(int i=0;i<n;i++)
                {
                    if(a[i]==key)
                    {
                        printf("Element found at position %d\n",i+1);
                        break;
                    }

                    if(i==n-1)
                    {
                        printf("Element not found\n");
                    }
                }

                break;

            case 5:

                if(n>=100)
                {
                    printf("Array is full\n");
                    break;
                }

                printf("Enter position: ");
                scanf("%d",&pos);

                printf("Enter value: ");
                scanf("%d",&value);

                if(pos<1 || pos>n+1)
                {
                    printf("Invalid Position\n");
                }
                else
                {
                    for(int i=n;i>=pos;i--)
                    {
                        a[i]=a[i-1];
                    }

                    a[pos-1]=value;
                    n++;

                    printf("Element inserted successfully\n");
                }

                break;

            case 6:

                printf("Enter position to delete: ");
                scanf("%d",&pos);

                if(pos<1 || pos>n)
                {
                    printf("Invalid Position\n");
                }
                else
                {
                    for(int i=pos-1;i<n-1;i++)
                    {
                        a[i]=a[i+1];
                    }

                    n--;

                    printf("Element deleted successfully\n");
                }

                break;

            case 7:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=7);

    return 0;
}