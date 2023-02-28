#include "main.h"

/**
 *rev_string - Reverse a string
 *@s: input string
 *Return: line reversed
 */
void rev_string(char *s)
{
	char rev = s[0];
	int cnt = 0;
	int i;

	while (s[cnt] != '\0')
		cnt++;
	for (i = 0; i < cnt; i++)
	{
		cnt--;
		rev = s[i];
		s[i] = s[cnt];
		s[cnt] = rev;
	}
}
