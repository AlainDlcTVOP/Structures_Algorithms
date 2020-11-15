#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter secund number: ");
    scanf("%d", &b);
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    printf("Number 1 = %d Number 2 = %d\n", a, b);
    printf("Maximum number is %d\n", max);
    return 0;
}
