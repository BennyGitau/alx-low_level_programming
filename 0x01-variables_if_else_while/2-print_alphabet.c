#include <stdio.h>
/**
 * main - prints alphabets in lover case
 * Return: (0) success
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}

