#include <stdio.h>

int palindrome(int n);
int main()
{
    int n;

    printf("enter the number:");
    scanf("%d", &n);

    if (palindrome(n))
    {
        printf("number is palindrome");
    }
    else
    {

        printf("number is not palindrome");
    }

    return 0;
}

int palindrome(int n)
{

    int rev = 0, d, m;

    m = n;

    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    if (rev == m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}