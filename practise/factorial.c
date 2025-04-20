#include <cs50.h>
#include <stdio.h>

int fact(int n);

int main(void)
{
    //get user input - positive nums
    int num;
    do
    {
        num = get_int("Enter number for factorial: ");
    }
    while (num <= 0);

    printf("Factorial of %i is: %i\n", num, fact(num));
}

int fact(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    else
    //recursive case
    {
        return n * fact(n-1);
    }
}
