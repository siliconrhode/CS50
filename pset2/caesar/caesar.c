#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    if ( argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    int key = atoi(argv[1]);
    printf("plaintext: ");
    string plaintext = get_string();
    
    printf("ciphertext: ");
    
    int absoluteKey = key % 26;
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
           if(isupper(plaintext[i]))
           {
               printf("%c",(plaintext[i] - 'A' + absoluteKey)%26+'A');
           }
           else
           {
               printf("%c",(plaintext[i] - 'a' +absoluteKey)%26 +'a');
           }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    
    }
    printf("\n");
}