#include <stdio.h>

/**
 *main - entry point
 *@argc: argument count
 *@argv: argumet vector
 *Return: exits success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
