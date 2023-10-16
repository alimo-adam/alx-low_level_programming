#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 *           including the terminating null byte,
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: String to be copied.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    /* Copy each character from src to dest */
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }

    /* Include the terminating null byte */
    dest[i] = '\0';

    return dest;
}
