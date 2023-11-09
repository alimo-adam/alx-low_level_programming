#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on incorrect number of arguments,
 *         99 on invalid operator, and 100 on division or modulo by zero
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return 98;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    operation = get_op_func(argv[2]);

    if (!operation)
        return 99;

    result = operation(num1, num2);
    printf("%d\n", result);

    return 0;
}
