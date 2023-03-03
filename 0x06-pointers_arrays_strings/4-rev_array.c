#include "main.h"

/**
 *reverse_array - prints reverse of integers
 *@a: array
 *@n: count
 *Return: array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; ++i)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
