#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		write(1, "+", 1);
	} else if (n == 0)
		{
			return (0);
			write(1, "0", 1);
		}
		else (n < 0)
		{
			return (-1);
			write(1, "-", 1);
		}
}
