#include "main.h"

void rev_string(char *s)
{
    int len = 0, i = 0;
    char tmp;

    while (s[len] != '\0')
    {
        len++;
    }

    len -= 1; /* Adjust length to exclude '\0' */

    while (i < len)
    {
        tmp = s[i];
        s[i] = s[len];
        s[len] = tmp;
        i++;
        len--;
    }
}
