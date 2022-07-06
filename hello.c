#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = 0;
    //Asks the user for their name
    name = get_string("What's your name?\n");
    //Prints Hello, (the name of the user)!
    printf("Hello, %s!\n", name);
}
