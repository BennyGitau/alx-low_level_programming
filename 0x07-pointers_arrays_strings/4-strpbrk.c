#include "main.h"
#include <stdlib.h>
/**
 *_strpbrk - search astring for any set of bytes
 *@s: string
 *@accept: bytes to search
 *Return: a pointer to the byte in the string
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
