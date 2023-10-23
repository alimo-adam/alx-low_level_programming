/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to look for
 * 
 * Return: pointer to the first occurrence of the character c in s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return s;
        s++;
    }

    return (*s == c) ? s : NULL;
}
