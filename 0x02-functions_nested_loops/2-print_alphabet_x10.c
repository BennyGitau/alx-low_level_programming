#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints lowercase letter ten times
 * Return: success (0)
 */
void print_alphabet_x10(void)
{
	int i;
	int cnt;

	cnt = 0;

	while (cnt < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	cnt++;
	_putchar('\n');
}
