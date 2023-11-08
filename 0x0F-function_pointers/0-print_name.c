#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: The name to be printed
 * @f: Function pointer to a printing function
 *
 * Description: This function takes a name and a function pointer.
 * It checks if the name and the function pointer are not NULL and
 * calls the function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}
