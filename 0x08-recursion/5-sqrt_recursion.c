#include "main.h"
int calcRoot(int x, int i);
/**
 *_sqrt_recursion - finds the square root of a number
 *@n: number
 *Return: square root
 *
 *
 */
int _sqrt_recursion(int n)
{
	return (calcRoot(n, 1));
}

/**
 *calcRoot - calculates square root
 *@x: squared number
 *@i: square root number
 *Return: square root
 */
int calcRoot(int x, int i)
{
	int square;

	square = i * i;
	if (square == x)
		return (i);
	else if (square < x)
		return (calcRoot(x, i + 1));
	else
		return (-1);
}
