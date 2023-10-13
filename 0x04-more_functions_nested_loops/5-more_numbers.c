#include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 * Author: YounesXXXXX
 */

void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
