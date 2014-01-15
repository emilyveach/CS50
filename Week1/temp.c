#include <cs50.h>
#include <stdio.h>

//converting F to C
int main(void)
{
    int far;
    printf("Enter a temp in F, as an integer: ");
    far = GetInt();
    printf("%d in Celsius is %.2f\n", far, ((far - 32.0) * (5.0 / 9.0))); 
}
