#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //asks for the person's name
    string name = get_string("What's your name?\n");
    
    //concatenate the name that was given previously with a greeting
    printf("hello, %s\n", name);
}