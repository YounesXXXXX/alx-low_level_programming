#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings with a limit on the number of characters.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = strlen(src);

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && j <= k)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
