#include "main.h"

int print_last_digit(int n)
{
    int last_digit = _abs(n % 10);
    _putchar('0' + last_digit);
    return (last_digit);
}

