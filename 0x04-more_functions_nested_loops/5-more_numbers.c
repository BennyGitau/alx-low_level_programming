#include "main.h"
/**
 *more_numbers - checks the code
 *n- digit entry
 *Return: always 0
 */
void more_numbers(void)
{
	int n, a;

	for (n = 1; n <= 10; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar('n');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
