#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always (0) success
 */
int main(void)
{
	int a;
	int b;
	int n = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (n != 99 && b <= 9 && a == 8)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
