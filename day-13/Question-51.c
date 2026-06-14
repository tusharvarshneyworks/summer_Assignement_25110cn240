// Write a program to Find largest and smallest element. 
#include <stdio.h>

int main()
{
    int array[100], n;
    int largest, smallest;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
  
    largest = array[0];
    smallest = array[0];

  
    for (int i = 1; i < n; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }

        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }

    printf("Largest element = %d\n ", largest);
    printf("Smallest element = %d ", smallest);

    return 0;
}