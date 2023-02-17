#include<stdio.h>
/**
 * main - shows the size of various types in c
 * Return: always 0 (success)
 */
int main(void)
{
	char charType;
	int intType;
	long int long_intType;
	long long int long_long_intType;
	float floatType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(long_intType));
	printf("Size of a long long int: %zu bytes\n", sizeof(long_long_intType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	return (0);
}
~
