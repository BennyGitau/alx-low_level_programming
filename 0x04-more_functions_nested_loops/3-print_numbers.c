#include "main.h"
/**
 * print_numbers - checks code
 * Return: always 0
 */
void print_numbers(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		if (d != '2' && d != '4')
		_putchar(d);
	}
	_putchar('\n');
}
