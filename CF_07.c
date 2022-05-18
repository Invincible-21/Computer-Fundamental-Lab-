#include <stdio.h>
int main()
{
    int n, i;
    double pow, sum = 1;
    printf("Enter the power(1 to 20): ");
    scanf("%d", &n);
    if (n > 0)
    {

        for (i = 1; i <= n; i++)
        {
            sum = sum * 2;
        }
        printf("%.2lf", sum);
    }

    if (n == 0)
    {
        printf("1");
    }

    if (n < 0)
    {
        n = n * -1;
        for (i = 1; i <= n; i++)
        {
            sum = sum * 2;
        }
        pow = 1 / sum;
        printf("%.2lf", pow);
    }
    return 0;
}
