#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int total = 10;
    int numbers[] = {20, 22, 500, 10, 5, 100, 1, 50, 55, 1000};
    int n = get_int("Enter number: ");

    for (int i = 0; i < total; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found at location %i in the data set.\n", i+1);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
