# C-Language
CS50 Harvard

#include <stdio.h>
#include <cs50.h>

// It is creating 2 x half-pyramid with gap between - like in Mario game.
// Program accepts integer: [ x >= 0 && x <= 23 ]
// If user use integer: [ x < 0 || x > 23 ] than program print warning & ask for correct integer.

int main(void)
{
    int h;
    do
    {
        printf("Height of two half-pyramids: \n");
        h = get_int();
        
            if ( h < 0)
            {
                printf("\nPlease, insert POSITIVE integer\n\n"); 
            }
            if ( h > 23)
            {
                printf("\nPlease, insert height LESS THAN 24\n\n");
            }
    }
    while( h < 0 || h > 23);
    
    for (int i = 0; i < h; i++)
    {
        for (int a = h-1; a > i; a--)
        {
            printf(" ");
        }
        for (int b = i; b >= 0; b--)
        {
            printf("#");
        }
        printf("  ");
        for(int c = i;c >= 0; c--)
        {
            printf("#");
        }
        printf("\n");
    }
    
}
