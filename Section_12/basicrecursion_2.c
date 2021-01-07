#include <stdio.h>
#include <stdlib.h>

void print();

int main()
{
    print(5);
    return 0;
}
void print(int n)
{

    printf("Hello n = %d\n", n);
    printf("---------------\n");
    print(n - 1);
    printf("---------------\n");
    printf("Hello n = %d\n", n);
}