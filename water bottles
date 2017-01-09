#include <stdio.h>
#include <cs50.h>


// It is calculating minutes of shower into bottles of water.
// Program accepts integer >= 0
// If user use integer < 0 than program print warning & ask for correct integer. 

int main(void)
{
    int m;
    do
    {
    printf("How many minutes did you spend in the shower ?  \n");
    m = get_int();
    
        if( m < 0)
        {
            printf("\nPlease, insert positive integer\n\n");  
        }
    }
 while ( m < 0);

    if (m > 0)
    {
//      int b = m * 12;
        printf("Minutes: %i\n", m);
        printf("Bottles: %i\n", m * 12);
    }
    
    else if (m == 0)
        {
            printf("\nLess than a minute ? Congratulation, You used less than 12 bottles of water !\n");
        }
}
