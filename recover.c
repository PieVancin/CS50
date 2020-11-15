#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>


typedef uint8_t BYTE;

#define BLOCKSIZE 512
int main(int argc, char *argv[])
{
    //check if it's usage is correct
    if (argc != 2)
    {   
        printf("usage: ./recover image\n");
        return 1;
    }
    
    //request to read a file and check f it exists
    char *file_n = argv[1];
    FILE *file_p = fopen(argv[1], "r");
    if (!file_p)
    {  
        printf("Cannot be open");
        return 1;
    }
    
    unsigned char buffer[BLOCKSIZE];
    int nimages = 0;
    int found_jpg = 0;
    FILE *output_point = NULL;

    //iterates through the file looking for images
    while (fread(&buffer, BLOCKSIZE, 1, file_p) == 1)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            //if it founds a image creates a new file
            if (found_jpg == 1)
            {
                fclose(output_point);
            }
            else
            {
                found_jpg = 1; 
            }
            
            char name[8];
            sprintf(name, "%03i.jpg", nimages);
            output_point = fopen(name, "w");
            nimages++;
        }
        if (found_jpg == 1)
        {
            fwrite(&buffer, BLOCKSIZE, 1, output_point);
        }
    }
    
    //closes the image files 
    fclose(output_point);
    fclose(file_p);

    
}
