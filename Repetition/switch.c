#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: 1 - 3\n ");

    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Tree\n");
        break;

    default:
        printf("Invalid number");
        break;
    }
    return 0;
}
