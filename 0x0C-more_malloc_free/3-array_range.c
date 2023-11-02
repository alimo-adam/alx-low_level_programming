#include "main.h"
#include <stdlib.h>
/**
* array_range - Creates an array of integers from min to max.
* @min: The first value of the array.
* @max: The last value of the array.
*
* Return: The pointer to the newly created array or NULL if min > max
*         or malloc fails.
*/
int *array_range(int min, int max)
{
int *array, i, size;
/* Check if min > max */
if (min > max)
return (NULL);
/* Calculate the size of the array */
size = max - min + 1;
/* Allocate memory for the array */
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
/* Fill the array with values from min to max */
for (i = 0; min <= max; i++, min++)
array[i] = min;
return (array);
}
