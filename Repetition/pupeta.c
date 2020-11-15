#include <stdio.h>

int main()
{
    int number_neighbour;

    printf("Enter a number within 0 - 8\n ");
    scanf("%d", &number_neighbour);

    if (number_neighbour == 0)
    {
        printf("Sad and will force you to listen to his story, will make you late.");
    }
    else if (number_neighbour == 1)
    {
        printf("He will ask you to deliver half of the pizza to his only neighbor, you may be late.");
    }
    else if (number_neighbour >= 2 && number_neighbour <= 5)
    {
        printf("Will have great mood and will be singing song. May crack joke as well. You will get good tips, definitely.");
    }
    else if (number_neighbour == 7)
    {
        printf("He will be making great drink for his neighbors and will invite you to taste.But will not give you tip.");
    }
    else if (number_neighbour == 6 || number_neighbour == 8)
    {

        printf("Too angry and furious, deliver the pizza and leave ASAP. ");
    }
    else
    {

        printf("input is invalid");
    }

    return 0;
}
