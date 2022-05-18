#include <stdio.h>
int main()
{
    int n, rem, div;
    scanf("%d", &n);

    while (n != 0)
    {
        div = n / 10;
        rem = n % 10;
        printf("%d", rem);
        n = div;
    }

    return 0;
}