#include "main.h"
/**
 * str_concat - concatena 2 cadenas
 * @s1: var1
 * @s2: var2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i, x, k;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++);
	for (x = 0; s2[x] != '\0'; x++);

	p = (char *)malloc((i + x + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)

	return (p);
}
