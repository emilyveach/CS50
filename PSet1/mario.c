/**
* mario.c
* Emily Veach
* Draws Mario's half-pyramid 
* using a height entered by the user.
*/

#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int height;
    // get user input, verify it
    // need to askthe user to try again if input is invalid. where?
    printf("#################\nHow high do you want the half-pyramid to be?\nGive a positive integer from 0 to 23.\n#################\nHeight: ");
    do 
    {
        height = GetInt();
        if (height < 0 || height > 23)
        {
            printf("Retry: ");            
        } 
    }
    while (height < 0 || height > 23);
    
    //draw pyramid: spaces, hashes, new line
    for (int i = 0; i < height; i++)
    {
        int spaces, hashes;
        hashes = i + 2;
        spaces = height + 1 - hashes;
        //printf("row = %d: spaces = %d, hashes = %d\n", i, spaces, hashes); 
        while (spaces > 0)
        {
            printf(" ");
            spaces -= 1;
        }
        while (hashes > 0)
        {
            printf("#");
            hashes -= 1;
        }
        printf("\n");
    }
    printf("Level Up!\n");
}
