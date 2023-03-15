#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strdup - duplicates a string
 *@str: ponter to duplicated string
 *Return: success 0
 *
 */
char *_strdup(char *str)
{
	char *ben;
	int i, a = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	ben = malloc((sizeof(char) * i) + 1);

	if (ben == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)

		ben[a] = str[i];
			return (ben);
}
