#include <stddef.h>
/**
* array_iterator - Execute a function on each element of an array
* @array: The array to be processed
* @size: The size of the array
* @action: A function pointer to the function to be executed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
