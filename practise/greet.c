#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
        return 0;
    }
    else
    {
        printf("Hello, world\n");
        return 1;
    }

}
