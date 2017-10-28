#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float change_float;
    // integers should  be eclared with a base value because..... (look up : integer declaration in C)
    int coins = 0;
    int change_integer = 0;
    //prompt user for a positive input
    do
    {
        printf("0 hai! How much change is owed?\n");
        change_float = get_float();
    }
    while (change_float < 0);
    //check how a float value is stored looking for a bug reducing total by one coin (debugging)
    //print how the value get stored in a float variable after user input
    //printf("The exact value  stored as a float variable after user input = %.10f \n", change_float);
    // add 0.005 to compensate for imprecision
    change_integer = change_float * 100 + 0.005;
    //note how float imprecision result in a loss of one sent in case of test case"$4.20"
    //printf("The integer value stored: %i\n", change_integer);
    //always give change based on the biggest coin, least coins possilbe
    if (change_integer >= 25)
    {
        coins = change_integer / 25;
        change_integer = (change_integer % 25);
    }
    if (change_integer >= 10)
    {
        coins = coins + change_integer / 10;
        change_integer = (change_integer % 10);
    }
    if (change_integer >= 5)
    {
        coins = coins +  change_integer / 5;
        change_integer = (change_integer % 5);
    }
    if (change_integer >= 1)
    {
        coins = coins + change_integer;
    }
    printf(" %i\n", coins);
}