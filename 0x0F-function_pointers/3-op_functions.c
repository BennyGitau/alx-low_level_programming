#include <stdio.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sums two integers
 * @a: interger
 * @b: integer
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: integer
 * @b: integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -  multiplication
 * @a: integer
 * @b: integer
 * Return: mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -  division
 * @a: integer
 * @b: integer
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus
 * @a: integer
 * @b: integer
 * Return: mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
