#include <stdio.h>

int main(void)
{
    int a = 5, b = 6, i;
    i = a++ * b++;
    printf("i%d,a%d b%d", a, b, i);

    return 0;
}
