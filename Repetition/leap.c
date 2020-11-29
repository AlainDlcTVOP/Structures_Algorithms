#include <stdio.h>
#include <stdint.h>
int main()
{
    uint16_t year;
    printf("Enter a year: ");
    scanf("%d", &year);

    year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? printf("Its a leap year %d \n", year) : printf("No not a leap year %d \n", year);

    return 0;
}
