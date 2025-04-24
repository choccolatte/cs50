#include<stdio.h>
// #include<cs50.h>

typedef char * string;

int main(void)
{
    string s = "Hi!";
    printf("%s\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}
