#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated memory or NULL if it fails or if nmemb
 *         or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;
    unsigned int i;

    /* Check if nmemb or size is 0 */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Calculate total size (nmemb * size) */
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);

    /* Initialize allocated memory to zero */
    for (i = 0; i < (nmemb * size); i++)
        ptr[i] = 0;

    return ((void *)ptr);
}

