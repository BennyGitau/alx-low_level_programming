#include "main.h"

int _calcPrime(int n, int d);
int squareRoot(int x, int i);

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (_calcPrime(n, 2));
}

/**
 * squareRoot - return square root of number
 * @x: number
 * @i: number divisor
 * Return: square root
 */

int squareRoot(int x, int i)
{
	int square;

	square = i * i;
	if (square >= x)
		return (i);
	else
		return (squareRoot(x, i + 1));
}

/**
 * _calcPrime - helper function, recursive steps taken
 * @n: number given to original function is_prime_number
 * @d: divisor
 * Return: 0 if not prime, 1 if prime
 */

int _calcPrime(int n, int d)
{
	if (n % d == 0)
		return (0);
	else if (squareRoot(n, 1) < d)
		return (1);
	else
		return (_calcPrime(n, d + 1));
}
