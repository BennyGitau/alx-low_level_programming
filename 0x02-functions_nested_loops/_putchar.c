#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c in output
 * @c: - character to print
 * Return: success (0)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
