#include <stdio.h>
/**
 * main - prints combination of three digits
 * Return: always (0) success
 */
int main(void)
{
	int x = 0;
	int y, z;
	int n = 0;

	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (n != 119)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
				n++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
