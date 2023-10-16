#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * Return : Always 0
 * @s : Value of string provided.
 * Author : YounesXXXXX
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(s[0]);
	_putchar('\n');
}
