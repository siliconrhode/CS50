#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int height;
    do
    {
        printf("Height:\n");
        height = get_int();
    }
    while(height<0 | height>23);
    
    for (int i = 2; i < height+2; i++)
    {
        for (int c = 0; c < i; c++)
        {
            printf("#");
            
        }
        printf("\n");
    }
}