// Prints an n-by-n grid of bricks with a loop

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 ||	 n > 8 );
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        
        for (int j = 2; j == n; j++)
        {
            printf("#");
            printf("\n");
            printf("##");
        }
        
        printf("\n");
    }
}