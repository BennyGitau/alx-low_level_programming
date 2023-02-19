#include <stdio.h>
/**
 * main - prints combination of three digits
 * Return: always (0) success
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x != y && y != z && z < y && y < x)
				if (x + y + z != 9 + 8 + 7)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
