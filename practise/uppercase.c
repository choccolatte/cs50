#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string values = get_string("Before: ");
    printf("After:  ");

    for (int i = 0, n = strlen(values); i < n; i++)
    {
    //     if(values[i] >= 'a' && values[i] <= 'z') // we are checking their ASCII numbers
    //     {
    //         //convert them to uppercase
    //         printf("%c", values[i] - 32);
    //     }
    //     else
    //     {
    //         // return values as is
    //         printf("%c\n", values[i]);
    //     }
    // }
    // printf("After:  %s\n", values);

        printf("%c", toupper(values[i]));
    }
    printf("\n");
}
