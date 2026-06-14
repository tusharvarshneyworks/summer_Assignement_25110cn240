// Write a program to Count even and odd elements. 
#include <stdio.h>

int main()
{
    int array[100], n;
    int even = 0, odd = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements = %d\n", even);
    printf("Total odd elements = %d", odd);

    return 0;
}