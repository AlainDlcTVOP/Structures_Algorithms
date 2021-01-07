#include <stdio.h>
#include <stdlib.h>

void printNumberRev(unsigned n);
void printNumberFord(unsigned n);
long factorial(unsigned n);
int main()
{

    printf("%f", factorial(3));

    return 0;
}

void printNumberRev(unsigned n)
{
    if (n == 0)
    {
        return;
    }
    printf("%u\n", n);
    printNumberFord(n - 1);
}
void printNumberFord(unsigned n)
{
    if (n == 0)
    {
        return;
    }
    printNumberFord(n - 1);
    printf("%u\n", n);
}
long factorial(unsigned n)
{
    if (n == 0)
    {
        return 1L;
    }
    return n * factorial(n - 1);
}