#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int fact, n;

    double a, b, kvad;
    printf("enter \n");
    scanf("%d", &n);
    /* for (int i = 1; i <= n; i++)
    {
        fact = i * n;
    }
    printf("%d", fact);
*/
    for (int j = 1; j <= n; j++)
    {
        kvad = pow(j, n); /* code */
    }
    printf("%.2f", kvad);

    return 0;
}
