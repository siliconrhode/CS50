#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int minutes;
    
    do
    {
    printf("Minutes:");
    minutes = get_int();
    }
    
    while (minutes<0);
    int bottles =minutes * 12;
    printf("Bottles:%i\n", bottles);

    
    
}