#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the number of underscores to print in the line
 * Author : Younes XXXXX
 */

void print_line(int n)
{
int j;

j = n;

if (n > 0)
{
for (n = 0; n < j; n++)
{
_putchar('_');
}
}
_putchar('\n');
}
