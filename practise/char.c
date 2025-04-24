#include<stdio.h>

int main (void)
{
    char *s = "Hi!";

    printf("%s\n", s); // will print the entire string
    // printf("%c\n", s[0]); // will print string characrter-wise
    // printf("%c\n", s[1]); // will print string characrter-wise
    // printf("%c\n", s[2]); // will print string characrter-wise
    // printf("%c\n", s[3]); // will print string characrter-wise

    for (int i = 0; i < 3; i++)
    {
        printf("%c\n", s[i]);
    }

}
