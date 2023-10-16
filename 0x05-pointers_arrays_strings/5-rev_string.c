#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * Return : Always 0
 * @s : Value of string provided.
 * Author : YounesXXXXX
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i > j)
	{
		i--;
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
	_putchar('\n');
}
