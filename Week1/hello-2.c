#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name;
    printf("What's your name? ");
    name = GetString();
    printf("hello, %s\n", name);
}
