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
    for (int i = 1; i == n; i++)
    {
        for (int j = 1; j == n; j++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    
    for (int i = 2; i == n; i++)
    
    {
    for (int j = 2; j == n; j++)
        {
            printf(" #\n##");
            
        }
        printf("\n");
    }
    
    for (int i = 3; i == n; i++)
    
    {
    for (int j = 3; j == n; j++)
        {
            printf("  #\n ##\n###");
            
        }
        printf("\n");
    }
    
    for (int i = 4; i == n; i++)
    
    {
    for (int j = 4; j == n; j++)
        {
            printf("   #\n  ##\n ###\n####");
            
        }
        printf("\n");
    }
    
    for (int i = 5; i == n; i++)
    
    {
    for (int j = 5; j == n; j++)
        {
            printf("    #\n   ##\n  ###\n ####\n#####");
            
        }
        printf("\n");
        
        
    }
    
    for (int i = 6; i == n; i++)
    
    {
    for (int j = 6; j == n; j++)
        {
            printf("     #\n    ##\n   ###\n  ####\n #####\n######");
            
        }
        printf("\n");
        
        
    }
    
    for (int i = 7; i == n; i++)
    
    {
    for (int j = 7; j == n; j++)
        {
            printf("      #\n     ##\n    ###\n   ####\n  #####\n ######\n#######");
            
        }
        printf("\n");
        
        
    }
    
    for (int i = 8; i == n; i++)
    
    {
    for (int j = 8; j == n; j++)
        {
            printf("       #\n      ##\n     ###\n    ####\n   #####\n  ######\n #######\n########");
            
        }
        printf("\n");
        
        
    }
    
    
}