#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
    if (str == NULL)
        return NULL;

    int length = 0;
    while (str[length] != '\0')
        length++;

    char *duplicate = malloc((length + 1) * sizeof(char));

    if (duplicate == NULL)
        return NULL;

    for (int i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return duplicate;
}

