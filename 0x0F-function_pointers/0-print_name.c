#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: The name to be printed
 * @f: The function pointer to a printing function
 */
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}
