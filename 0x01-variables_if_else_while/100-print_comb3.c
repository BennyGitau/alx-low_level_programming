#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always (0) success
 */
int main(void)
{
	int a = 0;
	int b;
	int n = 0;

	while (a <= 8)
	{
		b = a + 1;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (n != 44)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
			n++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
