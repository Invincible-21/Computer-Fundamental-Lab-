#include <stdio.h>
int main()
{
    int fib1 = 0, fib2 = 1, fib, n, i;

    scanf("%d", &n);
    printf("%d\t", fib2);

    for (i = 1; i <= n - 1; i++)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        printf("%d\t", fib);
    }

    return 0;
}