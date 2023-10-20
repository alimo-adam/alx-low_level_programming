#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: pointer to the result or 0 if it does not fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, k, l = 0, f, s, d = 0;

    while (n1[i++])
        ;
    while (n2[j++])
        ;
    if (i-- > size_r || j-- > size_r)
        return (0);
    for (k = 0; k < size_r - 1; k++, i--, j--)
    {
        f = i >= 0 ? n1[i] - '0' : 0;
        s = j >= 0 ? n2[j] - '0' : 0;
        r[k] = (f + s + d) % 10 + '0';
        d = (f + s + d) / 10;
    }
    if ((i > 0 && j > 0) && (d != 0 || (i == 0 && j == 0)))
        r[k++] = d + '0';
    if (k >= size_r)
        return (0);
    r[k--] = '\0';
    while (l < k)
    {
        d = r[k];
        r[k--] = r[l];
        r[l++] = d;
    }
    return (r);
}
