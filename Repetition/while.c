#include <stdio.h>

int main()
{
    int n, sum, i;
    printf("Enter n : ");
    scanf("%d", &n);

    sum = 0;
    while (n <= 0)
        ;

    for (i = 1; i <= n; ++i)
    {
        if (i % 3 == 0)
            sum += i;
        return 0;
    }
