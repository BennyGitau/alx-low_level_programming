#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase letter ten times
 * Return: success (0)
 */
void print_alphabet_x10(void)
{
	char i;
	int cnt = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (cnt = 1; cnt <= 10; cnt++)
		{
		_putchar(i);
		}
	}
	_putchar('\n');
}
