#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n, sum;
    printf("Enter size of array\n");
    scanf("%d", &n);

    int x[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % 100;
    }
    printf("Content of the array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", x[i]);
        sum = sum + x[i];
    }
    printf("\n\n");
    printf("sum is %d\n", sum);
    double avg = (double)sum / n;
    printf("average of sum is %2.f\n", avg);
    return 0;
}
