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
    while (height < 0 | height > 23);
    //pyramid builder start with two blocks (i=2)
    for (int i = 2; i < height + 2; i++)
    {
        //Space builder note the (+1) will give it the right-- 
        //shape,more visible with bottom leayer. 
        int spaces = height - i + 1;
        for (int c = 0; c < spaces; c++)
        {
            printf(" ");
        }
        //Block builder
        for (int c = 0; c < i; c++)
        {
            printf("#");
        }
        //Go to a new line after builder one layer
        printf("\n");
    }
}