#include<stdio.h>

void swap(int *a, int *b);

int main (void)
{
    int x = 100;
    int y = 500;

    printf("x is %i, y is %i\n", x, y);

    swap(&x, &y); // using address of operator
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int temp = *a; // // using dereference operator
    *a = *b;
    *b = temp;
}
