#include "helpers.h"
#include <math.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
     for(int j = 0; j < width; j++)   
     {
         int red = image[i][j].rgbtRed;
         int green = image[i][j].rgbtGreen;
         int blue = image[i][j].rgbtBlue;
         
         int avrg = round(((float)red + (float)blue + (float)green) /3);
         
         image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = avrg;
     }
    }
    
    
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
