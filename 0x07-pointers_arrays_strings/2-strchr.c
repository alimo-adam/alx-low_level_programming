#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    /* Validate input */
    if (s == NULL)
    {
        return NULL;
    }

    /* Loop through each character of string */
    while (*s != '\0')  /* Check end of string */
    {
        if (*s == c)  /* If character is found */
        {
            return s;  /* Return pointer to current position */
        }
        s++;  /* Move to next character */
    }

    /* Handle case when character is '\0' */
    if (c == '\0')
    {
        return s;
    }

    return NULL;  /* If character not found */
}
