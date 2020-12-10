
/**
 * @file amenu.c
 * @author Alain (AlainDlcTVOP)
 * @brief 
 * @version 0.1
 * @date 2020-12-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <math.h>

void menu();
int main()
{
    int quit = 0;
    static int n;     // n is the number for which you will find factorial
    static int p;     // you are going to keep the factorial of n in p
    double base, exp; // for a^b
    double pow1;
    int result;
    int option; // for keeping the menu option

    menu();

    while (!quit)
    {

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            menu();

            printf("Enter number: to se factorial\n");
            scanf("%d", &n);

            if (n < 0)
            {
                printf("Invalid number for factorial\n");

                return 1;
            }
            else if (n > 10)
            {
                printf("This program can find factorials only in the range 0 - 10\n");
                return 1;
            }

            for (int i = 1; i <= n; i++)
            {
                result = i * n;
            }
            printf("Factorial of %d = %d\n", n, result);

            break;
        case 2:
            menu();
            printf("Enter the base number: ");
            scanf("%lf", &base);

            printf("Enter the power raised: ");
            scanf("%lf", &exp);

            pow1 = pow(base, exp);

            printf("%.1lf", pow1);
            break;

        case 3:
            menu();
            quit = 1;
        default:

            printf("Please enter a valid input\n");
            return 1;
        }
    }
}
void menu()
{
    printf("----MENU----\n");
    printf("1. Find factorial\n");
    printf("2. Find a ^ b\n");
    printf("3. Quit\n");
    printf("What you want to do?\n");
}