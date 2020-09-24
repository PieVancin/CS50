#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    //inputs for the text
    string text = get_string("Text: ");

    float letters = 0, words = 1, sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //counts the letters
        if (isalpha(text[i]))
        {
            letters++;
        }
        //counts the words
        if (isspace(text[i]))
        {
            words++;
        }
        //counts the sentences
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    //do the formula
    float l = letters / words * 100;
    float s = sentences / words * 100;
    float index = 0.0588 * l - 0.296 * s - 15.8;
    int indexx = round(index);
    
    //checks the grade
    if (indexx >= 1 && indexx <= 16)
    {
        printf("Grade %i\n", indexx);
    }
    else
    {
        if (indexx < 1)
        {
            printf("Before Grade 1\n");
        }
        if (indexx > 16)
        {
            printf("Grade 16+\n");
        }
    }
}