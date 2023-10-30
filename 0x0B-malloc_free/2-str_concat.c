#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    int len1 = 0, len2 = 0, i, j;

    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    char *concatenated = malloc((len1 + len2 + 1) * sizeof(char));

    if (concatenated == NULL)
        return NULL;

    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];
    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return concatenated;
}

