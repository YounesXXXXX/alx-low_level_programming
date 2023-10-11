#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
void print_alphabet_x10(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		print_alphabet();
	}
}
