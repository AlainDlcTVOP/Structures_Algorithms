#include <stdio.h>
#include <math.h>

void menu();
int main()
{
    int quit = 0;
    static int n;     // n is the number for which you will find factorial
    static int p;     // you are going to keep the factorial of n in p
    double base, exp; // for a^b
    int result;
    int option; // for keeping the menu option
    while (!quit)
    {
        menu();
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            scanf("%d", &n);
            for (int c = 1; c <= n; c++)
                p = p * c;
            printf("Factorial of %d is %d\n", p);

            break;
        case 2:

            printf("Enter the base number: ");
            scanf("%lf", &base);

            printf("Enter the power raised: ");
            scanf("%lf", &exp);

            result = pow(base, exp);

            printf("%.1lf^%.1lf = %.2lf", base, exp, result);
            break;

        case 3:
            quit = 1;
        default:

            if (n < 0 && n > 10)
            {
                printf("This program can find factorials only in the range 0 - 10\n");
            }
            else if (option < 0 && option > 3)
            {
                printf("Invalid menu option");
            }
            if (n < 0)
                printf("Invalid number for factorial\n");
            // Now. you can use if-else to check the option and do needful
            // When option == 3, you need to do something with the variable quit, think
            // about that.
            // When option == 1, you should read n and first check the validity,
            // if n < 0, a particular message has to be printed, when n > 10, another
            // message has to be printed (see the expected output above), if n is valid
            // write a while loop to calculate the factorial and print it, becareful about
            // the initial value of p.
            // for option == 2, read base and exponant then make a call to the pow function
            // print the return value using printf. You may declare a variable to hold the
            // result.
            break;
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
    printf("Enter number:\n");
}