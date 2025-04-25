#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if(strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    char *r = s;

    r[0] = toupper(r[0]);

    printf("s = %s\n", s);
    printf("t = %s\n", t);
    printf("r = %s\n", r);
}

