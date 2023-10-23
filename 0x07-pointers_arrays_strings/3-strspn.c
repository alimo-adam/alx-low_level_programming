#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to scan
 * @accept: the string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int bytes = 0;
    char *ptr;

    while (*s && *accept)
    {
        for (ptr = accept; *ptr; ptr++)
        {
            if (*s == *ptr)
            {
                bytes++;
                break;
            }
        }

        // If no match found, break out of the loop
        if (!(*ptr))
            break;

        s++;
    }

    return bytes;
}
