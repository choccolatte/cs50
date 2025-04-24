#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int i = get_int ("i: ");
    int j = get_int ("j: ");

    if (i == j)
    {
        printf("Same\n");
        return 0;
    }
    else
    {
        printf("Different\n");
        return 1;
    }
}
