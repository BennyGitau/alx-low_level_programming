#include "main.h"

/**
 * print_last_digit - check code
 * @n: prints last character
 * Return: always 0
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
	n = -n;

	num = n % 10;

	if (num < 0)
		num = -num;

	_putchar(num + '0');

	return (num);
}
