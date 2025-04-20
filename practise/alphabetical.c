#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// int main(void)
// {
//     // get user's input
//     string text = get_string("input: ");

//     //iterate through each element in the string
//     for (int i = 0; i < strlen(text); i++)
//     {
//         if (text[i] < text[i-1])
//         {
//             printf("No\n");
//             return 0;
//         }
//     }

//     // print out yes or not
//     printf("Yes\n");
// }


int main(int argc, string argv[])
{
    // check whether user has provided correct inputs
    if (argc != 2)
    {
        printf("Please provide a word to evaluate.\n");
        return 1;
    }

    // get user's input
    string text = argv[1];

    // check whether the user's input is alphabet
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (!isalpha(text[i]))
        {
            printf("This is not a valid word.\n");
            return 2; // error code
        }
    }

    //iterate through each element in the string
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] < text[i-1])
        {
            printf("No\n");
            return 0;
        }
    }

    // print out yes or not
    printf("Yes\n");
}

