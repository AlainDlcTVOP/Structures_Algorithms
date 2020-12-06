#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (int i = 0; i < 50; i++)
    {
        if (i % 3 == 0)
        {
            printf("delbar med 3 %d \n", i);
        }
        else if (i % 5 != 0)
        {
            printf("Inte delbart med 5 %d \n", i);
        }
    }

    return 0;
}
