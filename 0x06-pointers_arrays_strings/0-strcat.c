#include "main.h"

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
