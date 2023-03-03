#include "main.h"

/**
 *string_toupper - change lowercase to uppercase
 *@n: string
 *Return: n
 *
 */
char *string_toupper(char *n)
{
	int j;

	j = 0;
	for (j = 0; j != '\0'; ++j)
	if (n[j] >= 'a' && n[j] <= 'z')
		{
			n[j] = n[j] - 32;
		}
		return (n);
}
