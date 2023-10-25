#include "main.h"
/**
* _strlen - Recursively finds the length of a string.
* @s: The string to measure.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}
/**
* palindrome_helper - Recursively checks if a string is a palindrome.
* @s: The string to check.
* @start: The start of the substring to check.
* @end: The end of the substring to check.
*
* Return: 1 if string is a palindrome, otherwise 0.
*/
int palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (palindrome_helper(s, start + 1, end - 1));
}
/**
* is_palindrome - Returns 1 if a string is a palindrome, 0 if not.
* @s: The string to check.
*
* Return: 1 if the string is a palindrome, otherwise 0.
*/
int is_palindrome(char *s)
{
int len = _strlen(s) - 1;
return (palindrome_helper(s, 0, len));
}
