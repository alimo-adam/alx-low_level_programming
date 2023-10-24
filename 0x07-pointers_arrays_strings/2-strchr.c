#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to look for
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s; // Return the pointer to this character
        }
        s++;
    }

    // Check if the character we're looking for is the null terminator
    // This is outside the loop because the loop condition skips the null terminator
    if (c == '\0')
    {
        return s;
    }

    return NULL; // Character not found, return NULL
}
