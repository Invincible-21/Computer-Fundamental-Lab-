#include <stdio.h>
int main()
{
    int fib1 = 0, fib2 = 1, fib, n, i;

    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d\t", fib2);
    }
    if (n > 1)
    {
        i = 1;
        printf("%d\t", fib2);
        do
        {
            fib = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib;
            printf("%d\t", fib);
            i++;
        } while (i <= n - 1);
    }

    return 0;
}
