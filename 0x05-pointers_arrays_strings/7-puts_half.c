#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
    int len = 0, n, i;

    /* calculate string length */
    while (str[len] != '\0')
    {
        len++;
    }

    /* calculate starting point, n, considering odd/even length */
    n = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

    /* print characters from n to end */
    for (i = n; i < len; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
