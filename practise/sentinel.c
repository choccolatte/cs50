#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    string t = "BYE!";
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    printf("%c %c %c %c\n", s[0], s[1], s[2], s[3]);
    printf("%s %s\n", s, t);
}
