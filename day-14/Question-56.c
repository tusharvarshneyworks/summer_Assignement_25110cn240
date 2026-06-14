//  Write a program to Find duplicates in array. 
#include <stdio.h>

int main()
{
    int array[100], n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Duplicate elements are: ");
 
    for (int i = 0; i < n; i++)
    {
        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }

        if (count > 1)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}