#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;

if (column != 0)
{
_putchar(',');

if (product <= 9)
_putchar('');
else
_putchar(product / 10 + '0');
}
_putchar(product % 10 + '0');

if (column == 9)
_putchar('\n');
else
_putchar(' ');
}
}
}
