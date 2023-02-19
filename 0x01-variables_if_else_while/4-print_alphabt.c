#include <stdio.h>
/**
 * main - prints alphabet lowercase letters except q and e
 * Return: success (0)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while
		(ch <= 'z')
		{
			if ((ch != 'e' && ch != 'q') && ch <= 'z')
				putchar(ch);
			ch++;
		}
	putchar('\n');

	return (0);
}
