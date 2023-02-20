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

	for (a = 0; a <= 8 ; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar((a % 8) + '0');
			putchar((b % 9) + '0');

			if (n != 99) 
				continue;
		
		
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
