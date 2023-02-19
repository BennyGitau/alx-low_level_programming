#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always (0) success
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b < 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a == 8 && b == 8)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
