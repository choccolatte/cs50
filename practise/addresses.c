#include<stdio.h>

int main (void)
{
    int n = 100;
    int *z = &n;

    printf("%i\n", *z);
    printf("%p\n", z);
}
