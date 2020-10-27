/**
 * @file char.c
 * @author Alain (AlainDlcTVOP)
 * @brief converting toUpperCase and toLowerCase diff is [65]+32= lowercase
 * [65]-32= uppercase
 * @version 0.1
 * @date 2020-10-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#define DIFF (32U)

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    char ch;

    printf("Enter an alphanetic character: \n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + DIFF;
        printf("hex:%d The corresponding lower case is : %c\n", ch, ch);
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - DIFF;
        printf("hex:%d The corresponding upper case is : %c\n", ch, ch);
    }
    else
    {
        printf("The given character is not alphabetic\n");
    }

    return 0;
}
