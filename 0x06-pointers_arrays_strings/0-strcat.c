#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *Return: success 0
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = dest[i + j];
		++j;
	}
	dest[i] = '\0';

	return (dest);
}