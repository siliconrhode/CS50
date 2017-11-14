#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
   string name = get_string();
   char firstCharCap = toupper(name[0]);
   printf("%c",firstCharCap);
   
   for (int i = 1, n = strlen(name); i < n; i++)
   {
       
       if (name[i] == ' ' )
       {
           
           printf("%c", toupper(name[i+1]));
       }
   }
   printf("\n");
   
}

