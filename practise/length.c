#include <cs50.h>
#include <stdio.h>

int string_length(string name);

int main (void)
{
    string ur_name = get_string("Enter your name: ");

    printf("Name's length is: %i\n", string_length(ur_name));
}

int string_length(string name)
{
    int count = 0;
    while(name[count] != '\0')
    {
        count++;
    }

    return count;
}
