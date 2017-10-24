#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int minutes;
    //Minutes: prompt
    do
    {
        printf("Minutes:");
        minutes = get_int();
    }
    // keep prompting positive input from user
    while (minutes < 0);
    //calculate the number of bottles per minute
    int bottles = minutes * 12;
    printf("Bottles:%i\n", bottles);
}