#include "main.h"

/**
 * set_string -  sets value of a pointer to a char
 * @s: pointer to change
 * @to: pointer to change to
 * Return: always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
