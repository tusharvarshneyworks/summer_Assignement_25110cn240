#include <stdio.h>
#include <math.h>

int arm(int n)
{
    int sum = 0, d, m, digit = 0, z;
    m = n;

    while (m > 0)
    {
        digit++;
        m = m / 10;
    }

    m = n;

    while (m > 0)
    {
        d = m % 10;
        sum = sum + pow(d, digit);
        m = m / 10;
    }

    if (n == sum)
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
    printf("enter the number :");
    scanf("%d", &n);

    if (arm(n))
    {
        printf("number is armstrong");
    }

    else
    {
        printf("number is not armstrong");
    }

    return 0;
}

 