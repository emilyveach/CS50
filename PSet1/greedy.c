/**
*
* Emily Veach
* 
* greedy.c
* Counts coins needed to give change
* 
*/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //get input, verify it's positive
    float change;
    do
    {
        printf("O hai!  How much change is owed?\n");
        change = GetFloat();
    }
    while (change < 0);
    
    //turn the input into an integer, rounding as needed
    int rounded;
    rounded = round(change * 100);
    //printf("input is %.20f; rounded is %.5d\n", change, rounded);     

    //count the change using quarters, dimes, nickels, pennies
    int count = 0; 
    while (rounded >= 25)
    {
        count = rounded / 25;
        rounded = rounded % 25;
        // printf("quarters\n");
    }
    
    while (rounded >= 10)
    {
        count += rounded / 10;
        rounded = rounded % 10;
        // printf("dimes\n");
    }
    
    while (rounded >= 5)
    {
        count += rounded / 5;
        rounded = rounded % 5;
        // printf("nickels\n");
    }
    
    while (rounded >= 1)
    {
        count += rounded / 1;
        rounded = rounded % 1;
        // printf("pennies\n");
    }
    printf("%d\n", count);
}




