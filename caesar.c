#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
        if (s[i] >= 'A' && s[i] <= 'z')
        {
            printf("%c", s[i] + atoi(argv[1]));
            
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}
