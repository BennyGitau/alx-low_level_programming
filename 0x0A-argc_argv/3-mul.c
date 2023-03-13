#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: argumet vector
 *Return: exits success
 */
int main(int argc, char *argv[])
{
	int mul, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;

	printf("%d\n", mul);
	return (0);
}
