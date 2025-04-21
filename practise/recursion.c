#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main (void)
{
    int pyramid = get_int("Pyramid Height: ");
    draw(pyramid);
}

void draw(int n)
{
    if(n == 0)
    {
        return;
    }

    draw(n-1); // any number -1 will go till n-1, then exit

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
}
