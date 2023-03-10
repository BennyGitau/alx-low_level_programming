#include "main.h"

/**
 *_pow_recursion - returns value or x raised to power y
 *@x: base integer
 *@y: power value
 *Return: power value
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (0);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
