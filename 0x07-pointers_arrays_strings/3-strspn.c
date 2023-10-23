#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment of the string to calculate the length of
 * @accept: string containing the list of characters to match in s
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, count;

    count = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                count++;
                break;
            }
        }

        if (accept[j] == '\0')
        {
            return count; // return count if no more matches
        }
    }

    return count;
}
