#include <stdio.h>

/*
Please note that the rates
are applied on slabs, that means for unit consumed of 300, 
first 100 units will be charges @$0.2, then next 150 units
@$0.5, and rest of 50 units @0.75 */
int main()
{
    int units;          // you need to input this
    double bill_amount; // you need to calculate this

    // prompt user to input unit consumed using printf and then
    printf("input unit consumed\n");
    // using scanf read the value into the unit variable.
    scanf("%d", &units);
    // Now, use if-elseif to decide about rate
    if (units < 0)
    {
        printf("Unit consumed cannot be negative\n");
    }
    else if (units >= 0 && units <= 100)
    {
        bill_amount = units * 0.2; // for this range 0.2 is the rate
    }
    else if (units > 100 && units <= 250)
    { // >100 and <=250
        // please note that the bill must be calculated on slabs (see instructions)
        bill_amount = 0.2 * 100;

        bill_amount = bill_amount + 0.5 * (units - 100);
    }
    else if (units > 250 && units <= 500)
    {
        bill_amount = 0.2 * 100;

        bill_amount = bill_amount + 150 * 0.5;

        bill_amount = bill_amount + (units - 250) * 0.75;
    }
    else
    { // for anything >500
        // please note that the bill must be calculated on slabs (see instructions)
        bill_amount = 0.2 * 100;

        bill_amount = bill_amount + 150 * 0.5;

        bill_amount = bill_amount + 250 * 0.75;

        bill_amount = bill_amount + (units - 500) * 1.0;
    }

    // ** finally print the bill amount here, please note that if the unit consumed is
    // invalid that is negative then no bill should be printed. **

    units < 0 ? printf("invalid that is negative then no bill should be printed \n") : printf("Total bill:$ %.2f for %d units\n", bill_amount, units);

    return 0;
}