#include <stdio.h>

void meow (int n);

// // main funciton
// int main (void)
// {
//     for (int i = 0; i < 5; i++){
//         meow();
//     }
// }

// // meow function
// void meow(void)
// {
//     printf("meow\n");
// }


// main funciton
int main (void)
{
    meow(3);
}

// meow function
void meow(int n)
{
    for (int i = 0; i < n; i++){
    printf("meow\n");
    }
}
