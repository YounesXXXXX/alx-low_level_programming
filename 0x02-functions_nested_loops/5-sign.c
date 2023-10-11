#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative.
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		write(1, "+", 1);
		result = 1;
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		result = 0;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		result = -1;
	}

	return (result);
}
