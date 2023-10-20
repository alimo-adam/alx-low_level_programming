/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	/* Iterate through both strings */
	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
		;

	/* Compare the characters at position i */
	return (s1[i] - s2[i]);
}
