#include <stdio.h>
#include <stdlib.h>

void fun1();
void fun2();
int main()
{
    int x[] = {1, 2, 3};
    int p = 0;
    char str[] = "Hello";

    fun1();

    printf("%d %s\n", x[p], str);

    return 0;
}
void fun1()
{
    int i = 5, j = 10;
    fun2();
}
void fun2()
{
}