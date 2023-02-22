#include "main.h"

/**
 * _isalpha - compares lowercase or uppercase
 * @c: prints the character
 * Return: always 0
 */
int _isalpha(int c)
{	
	if ((c = 'a' && c <= 'z') || (c = 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
