#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string (`dest`).
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int j = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[j] != '\0')
	{
		dest[n] = src[j];
		n++;
		j++;
	}
	return (dest);
}
