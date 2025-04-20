#include<stdio.h>

int SIZE = 5;
int main (void)
{
    // decvlare array
    int nums[SIZE];
    nums[0] = 1;

    // populate array - int nums[SIZE] = {1, 2, 4, 8, 16}
    for (int i = 1; i < SIZE; i++)
    {
        nums[i] = nums[i-1] * 2;
    }

    // or we can do this way
    // nums[0] = 1
    // nums[1] = nums[0] * 2;
    // nums[2] = nums[1] * 2;
    // nums[3] = nums[2] * 2;
    // nums[4] = nums[3] * 2;

    // print values one by one
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i\n", nums[i]);
        }
}
