// Prints that brick wall of Mario

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    
        // Asks the height of the wall
    {
        n = get_int("Height: ");
    }
    
    // Make the size of the wall that have been given
    while (n < 1 || n > 8);
    
    // If it's 1
    for (int i = 1; i == n; i++)
    {
        for (int j = 1; j == n; j++)
        {
            printf("#  #");
        }
        
        printf("\n");
    }
    
    // If it's 2
    for (int i = 2; i == n; i++)
    
    {
        for (int j = 2; j == n; j++)
        {
            printf(" #  #\n##  ##");
            
        }
        printf("\n");
    }
    
    // If it's 3
    for (int i = 3; i == n; i++)
    
    {
        for (int j = 3; j == n; j++)
        {
            printf("  #  #\n ##  ##\n###  ###");
            
        }
        printf("\n");
    }
    
    // If it's 4
    for (int i = 4; i == n; i++)
    
    {
        for (int j = 4; j == n; j++)
        {
            printf("   #  #\n  ##  ##\n ###  ###\n####  ####");
            
        }
        printf("\n");
    }
    
    // If it's 5
    for (int i = 5; i == n; i++)
    
    {
        for (int j = 5; j == n; j++)
        {
            printf("    #  #\n   ##  ##\n  ###  ###\n ####  ####\n#####  #####");
            
        }
        printf("\n");
        
        
    }
    
    // If it's 6
    for (int i = 6; i == n; i++)
    
    {
        for (int j = 6; j == n; j++)
        {
            printf("     #  #\n    ##  ##\n   ###  ###\n  ####  ####\n #####  #####\n######  ######");
            
        }
        printf("\n");
        
        
    }
    
    // If it's 7
    for (int i = 7; i == n; i++)
    
    {
        for (int j = 7; j == n; j++)
        {
            printf("      #  #\n     ##  ##\n    ###  ###\n   ####  ####\n  #####  #####\n ######  ######\n#######  #######");
            
        }
        printf("\n");
        
        
    }
    
    // If it's 8
    for (int i = 8; i == n; i++)
    
    {
        for (int j = 8; j == n; j++)
        {
            printf("       #  #\n      ##  ##\n     ###  ###\n    ####  ####\n   #####  #####\n  ######  ######\n #######  #######\n########  ########");
            
        }
        printf("\n");
        
        
    }
    
    
}