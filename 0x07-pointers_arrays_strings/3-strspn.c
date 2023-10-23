/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the substring of characters to search for.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}

	return (count);
}
