#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    
    float dollar;
    int cent;
    
    // Prompts user to input the amount owed
    
    do
    {
        dollar = get_float("Change owed:");
        cent = round(dollar * 100);
        
    }
    
    while (dollar < 0.00);
    
    int coins = 0;
    
    // Adds up one coin if the owed amount is greater or equal to 25
    
    while (cent >= 25)
    {
        coins++;
        cent = cent - 25;
    }
    
    // Adds up one coin if the owed amount is greater or equal to 10 and less than 25
    
    while (cent >= 10 && cent < 25)
    {
        coins++;
        cent = cent - 10;
    }
    
    // Adds up one coin if the owed amount is greater or equal to 5 and less than 10
    
    while (cent >= 5 && cent < 10)
    {
        coins++;
        cent = cent - 5;
        
    }
    
    // Adds up one coin if the owed amount is greater or equal to 1 and less than 5
    
    while (cent >= 1 && cent < 5)
    {
        coins++;
        cent = cent - 1;
        
    }
    
    // Print the amount of coins that will be given
    
    printf("%i\n", coins);
    
        
    
    
}