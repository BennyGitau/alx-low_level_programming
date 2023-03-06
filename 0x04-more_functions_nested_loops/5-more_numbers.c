#include "main.h"
/**
 *more_numbers - checks the code
 *n- digit entry
 *Return: always 0
 */
void more_numbers(void)
{
	int a, n;

	for (n = 1; n < 10; n++)
	{
		a = 0;
		while (a <= 14)
		{
			_putchar(a);
			a++;
		}
		_putchar(n);
	}
	_putchar('\n');
}
