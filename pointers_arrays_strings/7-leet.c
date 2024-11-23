#include "main.h"
/**
 * *leet - codifique una cadena en 1337
 * @s: cadena
 * Return: 0
 */
char *leet(char *s)
{
	char *p = s;
	char leet[] = "aAeEoOtTlL";
	char leet2[] = "4433007711";
	unsigned int i;

	while (*s)
	{
		for (i = 0; leet[i]; i++)
		{
			if (*s == leet[i])
			{
				*s = leet2[i];
				break;
			}
		}
		s++;
	}

	return (p);
}

