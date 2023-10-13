#include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 * Author: YounesXXXXX
 */

void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
