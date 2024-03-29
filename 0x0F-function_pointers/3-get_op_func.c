#include <stdlib.h>
#include "3-calc.h"

/**
 *get_op_func - gets the correct function to perform operation
 *@s: the operator passed as an argument
 *
 *Return: return a pointe to the function
 *corresponding to the operater
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
