//  Write a program to Linear search.  
#include<stdio.h>

int main()
{
    int array[100], n, search;
    int found = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == search)
        {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found");
    }

    return 0;
}