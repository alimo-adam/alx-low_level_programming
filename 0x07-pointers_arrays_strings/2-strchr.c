#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string
 * @c: character to locate
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s; // return pointer to the first occurrence of char c
        }
        s++;
    }

    if (c == '\0') // check if the character is null character
    {
        return s;
    }

    return NULL; // character not found
}
