#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of spaces to print in the line + character \
 * @k: the number of spaces to print in the line
 * Author : Younes XXXXX
 */

void print_diagonal(int n)
{
int j;
int k;

j = n;

if (n > 0)
{
for (n = 0; n < j; n++)
{
for (k = 0; k < n; k++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar ('\n');
}
}
