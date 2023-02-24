#include "main.h"

/**
 * _isdigit - checks the code
 * @c: digit entry
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
