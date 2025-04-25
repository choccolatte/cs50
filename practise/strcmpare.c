#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
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

    //  char *r = s;
    char *r = malloc(strlen(s) + 1);

    // checking if there's memroy to be returned from malloc()
    if (r == NULL)
    {
        printf("memory unavailable\n");
        return 1;
    }

    // using malloc to store s's strings in r but at diff locations
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        r[i] = s[i];
    }

    // only captalize if there's any character to capitalize, else, return
    if (strlen(s) > 0)
    {
        r[0] = toupper(r[0]);
    }
    else
    {
        printf("content not provided\n");
        return 1;
    }

    printf("s = %s\n", s);
    printf("t = %s\n", t);
    printf("r = %s\n", r);

    free(r);
}
