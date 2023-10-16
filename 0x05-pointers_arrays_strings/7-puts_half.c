#include "main.h"

void puts_half(char *str)
{
    int len = 0, n;

    while (str[len] != '\0')
    {
        len++;
    }

    n = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);

    for (int i = n; i < len; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
