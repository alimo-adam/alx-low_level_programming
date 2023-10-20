/**
 * _strncpy - Copies a string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to be copied from src.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy at most 'n' characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill the remaining space with null bytes if necessary */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
