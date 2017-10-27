#include <cs50.h>
#include <stdio.h>

int main(void)
{   
    float change_float;
    int coins=0;
    int change_integer=0;
    do 
    {   
        printf("0 hai! How much change is owed?");
         change_float =get_float();
    }
    while (change_float < 0);
    change_integer = change_float * 100 + 0.005;
    
    if (change_integer >= 25)
    {
        coins = change_integer / 25;
        change_integer = (change_integer % 25);
        printf("%i\n", coins);
        printf("%i\n", change_integer);
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
               
   
    printf("%i\n", coins);

    
    
    
     
    
     
    
    
    
    
    
   
}