#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always (0) success
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10;)
	{
		for (b = 0; b < 10;)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (b != a && b < a)
			if (a + b != 17)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
