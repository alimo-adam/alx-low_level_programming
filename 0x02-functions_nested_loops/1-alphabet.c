#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase followed by a new line
 *
 * Description: Uses _putchar function to print each letter
 * Return: void
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }
    _putchar('\n');
}
