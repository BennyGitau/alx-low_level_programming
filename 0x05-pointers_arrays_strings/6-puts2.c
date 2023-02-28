#include "main.h"
/**
 * puts2 - function that prints every character
 * @str: input
 * Return: success
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

