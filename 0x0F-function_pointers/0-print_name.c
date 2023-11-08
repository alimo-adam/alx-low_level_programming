#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - prints a name using a function pointer
* @name: The name to be printed
* @f: A function pointer to determine how to print the name
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
