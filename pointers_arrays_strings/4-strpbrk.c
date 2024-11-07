#include "main.h"
/**
 *_strpbrk - función que buca en una cadena cualquiera de un conjunto de byte
 * @s: cadena
 * @accept: combinaciones para s
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		p = accept;

		while (*p)
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}

		s++;
	}
	return (NULL);
}
