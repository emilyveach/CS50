#include <cs50.h>
#include <stdio.h>

//converting F to C
int main(void)
{
    int far;
    float cel;
    printf("Enter a temp in F, as an integer: ");
    far = GetInt();
    cel = (far - 32.0) * (5.0 / 9.0);
    printf("%d in Celsius is %.2f. ", far, cel);
    
    if (cel <= 0)
    {
        printf("Brrr.\n");
    }
    else if (cel >= 100)
    {
        printf("Hey, guy, you're boilin'.\n");
    }
    else
    {
        printf("\n");
    }
}
