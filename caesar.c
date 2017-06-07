#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Checking argument
    if (argc != 2)
    {
        printf ("Error: Enter a single argument.");
        return 1;
    }
    
    string StringArg = argv[1];
    
    
    //This is the cipher key variable
    int key = atoi(StringArg);
    
    
    
    //Gets the plaintext
    printf ("plaintext: ");
    string plainText = get_string();
    
    printf ("ciphertext: ");
    
    
    //Cipher algorithm
    
    for (int i = 0, n = strlen(plainText); i < n; i++)
    {
        //Checks for uppercase and mods to wrap around. 
        //Current acii decimal value - Starting alphabetic value =
        //alphabetic position shift(aps). aps % total alphabetic postions(26) =
        //the new wrapped ascii decimal value. 
        if (isupper(plainText[i]))
        {
            plainText[i] = (plainText[i] - 65 + key) % 26 + 65;
            printf("%c", plainText[i]);
        }
        else if (islower(plainText[i]))
        {
            plainText[i] = (plainText[i] - 97 + key) % 26 + 97;
            printf("%c", plainText[i]);
        }
        else
        {
            printf("%c", plainText[i]);
        }
        
        
    }
    
    printf("\n");
    return 0;
    
    
}