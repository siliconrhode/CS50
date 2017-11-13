#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{   
    
    
    if (argc !=2 || !isalpha(argv[1][0]) )
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    
    for(int count = 0; count < strlen(argv[1]); count++)
    {
        if (!(isalpha(argv[1][count])))
        {
           
           printf("invalid keyword\n");
           return 1;
           
        }
    }
    
    
    {
        string key = argv[1];
        printf("plaintext:");
        string plainText = get_string();
        
        printf("ciphertext:");
        
        
        //write code to cipher text
        int keyLength = strlen(key);
        for (int i =0, j=0; i < strlen(plainText);j++, i++)
        {   
            
            int charKey = 0;
            // cipher the char if it's a letter.
            if (isalpha(plainText[i]))
            {   
                
                
                    if (islower(key[j%keyLength]))
                    {
                         charKey = key[j%keyLength]-'a';
                        
                    }
                    
                    else
                    {
                        charKey = key[j%keyLength]-'A';
                    }
                    
                    
                    
                if (isupper(plainText[i]))
                {
                   printf("%c", ((plainText[i]+charKey-'A')%26) + 'A'); 
                }
                
                
                else
                {
                    printf("%c", ((plainText[i]+charKey-'a')%26) + 'a');
                }
                
                
                
            // End of cipher code    
            }
            else
            {
                printf("%c", plainText[i]);
                j--;
                
            }
        }
        printf("\n");
        //printf("Debug%s",argv[1]);
    }
}