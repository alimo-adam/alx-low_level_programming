#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes of s2 to concatenate to s1.
*
* Return: If the function fails - NULL.
*         Otherwise - a pointer to the concatenated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
/* Treat NULL as empty string */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Calculate the length of s1 */
while (s1[len1])
len1++;
/* Calculate the length of s2 */
while (s2[len2])
len2++;
/* Use the minimum of n and the length of s2 */
if (n > len2)
n = len2;
/* Allocate memory for the concatenated string */
concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);
/* Concatenate s1 to concat */
for (; i < len1; i++)
concat[i] = s1[i];
/* Concatenate n bytes of s2 to concat */
for (; i < (len1 + n); i++, j++)
concat[i] = s2[j];
/* Null terminate the concatenated string */
concat[i] = '\0';
return (concat);
}
