#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name -  function that prints name
 *@name: string
 *@f: pointer to a string
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
