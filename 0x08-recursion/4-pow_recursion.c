#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The power to raise x to.
 * 
 * Return: The value of x raised to the power of y. If y is less than 0,
 *         the function returns -1.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    }
    else if (y == 0)
    {
        return (1);
    }
    else
    {
        return (x * _pow_recursion(x, y - 1));
    }
}

