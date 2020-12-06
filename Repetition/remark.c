#include <stdio.h>
void print_remark(int age)
{
    // --- DO NOT CHANGE ANYTHING ABOVE
    // --- age is available here(you do not need to declare) in the variable age, auto-tester will make a call to
    // this function and expects a printout from this function according to the logic as described.

    // age > 0 and < 13 ----> "Child" // age >= 20 and < 45 -----> "Young"
    // age >= 45 and < 60 -----> "Mid-aged"
    // age >= 60 ----> "Wise"
    // age <= 0 ---> "Invalid"
    // Please note that after printing remark your program must print a new line at the end.
    // ---- Write your code below ----
    if (age > 0 && age < 13)
    {
        printf("Child\n");
    }
    else if (age >= 13 && age < 20)
    {
        printf("Teen\n");
    }
    else if (age >= 20 && age < 45)
    {
        printf("Young\n");
    }
    else if (age >= 45 && age < 60)
    {
        printf("Mid-aged\n");
    }
    else if (age >= 60)
    {
        printf("Wise\n");
    }
    else

    {
        printf("Invalid\n");
    }
}
int main()
{
    // test cases
    print_remark(1);
    print_remark(20);
    print_remark(42);
    print_remark(50);
    print_remark(60);
    print_remark(13);
    return 0;
}
