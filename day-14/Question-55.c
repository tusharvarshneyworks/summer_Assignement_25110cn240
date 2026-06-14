// Write a program to Second largest element.
#include <stdio.h>

int main()
{
    int array[100], n;
    int largest, secondLargest;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    largest = array[0];
    secondLargest = array[1];

    if (secondLargest > largest)
    {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }
    
    for (int i = 2; i < n; i++)
    {
        if (array[i] > largest)
        {
            secondLargest = largest;
            largest = array[i];
        }
        else if (array[i] > secondLargest && array[i] != largest)
        {
            secondLargest = array[i];
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}