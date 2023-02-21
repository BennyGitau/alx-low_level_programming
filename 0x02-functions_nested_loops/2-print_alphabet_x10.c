#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase letter ten times
 * Return: success (0)
 */
void print_alphabet_x10(void)
{
	char i;
	int count;

	count = 0;

	while (count <= 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			count++;
		}
		_putchar('\n');
		i++;
	}
}
