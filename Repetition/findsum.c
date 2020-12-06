#include <stdio.h>

int get_sum(int n);
int main(int argc, char const *argv[])
{
    printf("sum %d\n", get_sum(25));
    return 0;
}
int get_sum(int n)
{
    int sum = 0;
    int i;
    i = 1;

    sum = 0;
    i = 1;
    while (n <= 0)
        ;

    for (i = 0; i <= n; ++i)
    {
        if (i % 3 == 0 && i % 5 != 0)
            sum += i;
    }

    return sum;
}