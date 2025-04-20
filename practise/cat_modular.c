#include <cs50.h>
#include <stdio.h>

void meow (int n);
int get_positive_value(void);

// main funciton
int main (void)
{
    int number_of_times = get_positive_value();
    meow(number_of_times);
}

// get positive value function

int get_positive_value(void)
{
    int times;
    do{
        times = get_int("Enter number: ");
    } while (times <= 0);

    return times;
}
// meow function
void meow(int number_of_times)
{
    for (int i = 0; i < number_of_times; i++){
    printf("meow\n");
    }
}
