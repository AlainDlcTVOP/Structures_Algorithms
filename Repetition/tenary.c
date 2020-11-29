#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 13 && age <= 19 ? printf("Teen") : printf("Not Teen");
    return 0;
}
