#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string to reverse.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
int length = 0;
char temp;

while (s[length] != '\0')
{
length++;
}

for (int i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
