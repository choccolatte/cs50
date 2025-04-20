#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main (void)
{
    int arr_length = 6;
    string strings[] = {"battleship", "thimble", "top hat", "boot", "cannon", "iron"};

    string user_string = get_string("Enter string: ");

    for (int i = 0; i < arr_length; i++)
    {
        if (strcmp(user_string, strings[i]) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not Found\n");
    return 1;
}
