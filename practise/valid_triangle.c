#include <stdio.h>
#include <cs50.h>

bool valid_triangle(float a, float b, float c);

int main (void)
{
    int x = get_int("Enter first side of triangle: ");
    int y = get_int("Enter second side of triangle: ");
    int z = get_int("Enter third side of triangle: ");

    valid_triangle(x, y, z);

    if (true){
        printf("Congrats! Its a perfectly working triangle.\n");
    } else {
        printf("Oh no. The triangle can not be made. Try again.\n");
    }
}

bool valid_triangle(float a, float b, float c){
    // check of all positive values
    if (a <=0 || b <= 0 || c <= 0){
        return false;
    }

    // check that the sum of any two sides is greater than the third side
    if ((a + b <= c) || (b + c <= a) || (c + a <= b)){
    return false;
    }

    // if we passed both tests, we're good. return bool value
    return true;
}
