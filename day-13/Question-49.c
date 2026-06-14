// Write a program to Input and display array.
#include <stdio.h>

int main()
{
    int array[1000], n;
    printf("enter the size of an array: ");
    scanf("%d", &n);

    printf("enter the elments of an array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("entered elements of array are ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}