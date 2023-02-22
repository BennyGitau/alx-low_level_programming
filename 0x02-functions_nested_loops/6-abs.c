#include "main.h"

/**
 * _abs - computes absolute value of integer
 *@n: hold value
 * Return: always success
 */
int _abs(int n)
{

	if (n < 0)
	{
		int val = -n;

		val = n = -n;
		return (val);
	}
	return (n);
}

