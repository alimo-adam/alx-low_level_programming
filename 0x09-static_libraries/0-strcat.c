#include "main.h"

char *_strcat(char *dest, char *src)
{
    int i, j;
    for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; (dest[i + j] = src[j]) != '\0'; j++)
        ;
    return (dest);
}

