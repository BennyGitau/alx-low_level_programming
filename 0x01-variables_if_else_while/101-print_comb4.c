#include <stdio.h>
/**
 * main - prints combination of three digits
 * Return: always (0) success
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 9; y++)
		{
			for (z = 0; z < 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x == 8 && y ==8 && z == 8)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
