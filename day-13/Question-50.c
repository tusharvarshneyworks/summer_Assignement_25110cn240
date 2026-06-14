// Write a program to Find sum and average of array.

#include <stdio.h>

int main()
{
    int array[100], n;
    int sum = 0;
    float average;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    average = (float)sum / n;

    printf("Sum   = %d\n", sum);
    printf("Average   = %.2f", average);

    return 0;
}