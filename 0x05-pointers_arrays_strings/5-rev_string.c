#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
    int len = 0;
    int i = 0;
    char tmp;

    /* Calculate the length of the string */
    while (s[len] != '\0')
    {
        len++;
    }

    len -= 1; /* Adjust length for zero indexing */

    /* Swap characters for the first half of the string with the second half */
    while (i < len)
    {
        tmp = s[i];
        s[i] = s[len];
        s[len] = tmp;
        i++;
        len--;
    }
}
