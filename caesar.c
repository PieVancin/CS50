#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    string s = 0; 
    if (argc == 2)
    {
    s = get_string("plaintext: ");
    printf("ciphertext:  ");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isupper(s[i]))
        {
            printf("%c", s[i] + atoi(argv[1]) % 26);
            
        }
        if (islower(s[i]))
        {
            printf("%c", s[i] + atoi(argv[1]) % 26);
        }
        if (isdigit(s[i]))
        {
            printf("%c", s[i]);
        }
        if (isspace(s[i]))
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}
