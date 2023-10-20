/**
 * _strncat - Concatenates two strings, using at most 'n' bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be appended from src.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append at most 'n' bytes from src to dest */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}

	/* Add null terminator at the end */
	dest[dest_len] = '\0';

	return (dest);
}
