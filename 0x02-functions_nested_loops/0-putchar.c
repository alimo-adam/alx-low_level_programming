include "main.h"

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "_putchar\n";
    while (*s)
        _putchar(*s++);
    return (0);
}
