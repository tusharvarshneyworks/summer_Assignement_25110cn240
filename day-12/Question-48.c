#include <stdio.h>

int perfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (perfect(n))
    {
        printf("Number is perfect");
    }
    else
    {
        printf("Number is not perfect");
    }

    return 0;
}