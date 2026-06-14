//Write a program to Frequency of an element.  
#include <stdio.h>

int main()
{
    int array[100], n, element;
    int frequency = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &element);
 
    for (int i = 0; i < n; i++)
    {
        if (array[i] == element)
        {
            frequency++;
        }
    }

    printf("Frequency of %d = %d", element, frequency);

    return 0;
}