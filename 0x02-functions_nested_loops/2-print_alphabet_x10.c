#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase letter ten times
 * Return: success (0)
 */
void print_alphabet_x10(void)
{
	char i;
	int cnt;

	cnt = 1;

	while (cnt <= 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			cnt++;
		}
		_putchar('\n');
		i++;
	}
}
