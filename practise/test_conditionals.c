#include <cs50.h>
#include <stdio.h>

int main (void){
    int getx = get_int("Enter value of X: ");
    int gety = get_int("Enter value of Y: ");

    if (getx > gety){
        printf("X is greater than Y.\n");
    }
    else if (getx < gety) {
        printf("Y is greater than X.\n");
    } else{
        printf("X is equal to Y.\n");
    }
}

