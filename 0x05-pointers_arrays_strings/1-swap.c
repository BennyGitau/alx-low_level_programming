#include "main.h"

/**
 *swap_int- swap values
 *@a: input
 *@b: input
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
