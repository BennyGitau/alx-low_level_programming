#include "main.h"

/**
 *char *_strcpy - a fuctio that copies a string poiter
 *@dest: where it copies to
 *@src: source where it copies from
 *Return: string
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
