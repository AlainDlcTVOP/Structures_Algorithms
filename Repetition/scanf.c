/**
 * @file scanf.c
 * @author Alain (AlainDlcTVOP)
 * @brief scanf resolve bugg with space 
 * @version 0.1
 * @date 2020-10-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    int i, j;

    printf("Enter a integer\n");
    scanf("%d", &i);
    printf("Enter a character\n");
    scanf(" %c", &ch); // fixed-> " %c"
    printf("Enter a secound integer\n", &j);
    scanf("%d", &j);
    printf("You chooice is char=%c int=%d another int=%d ", ch, i, j);
    return 0;
}
