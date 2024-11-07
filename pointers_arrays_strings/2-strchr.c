#include "main.h"
/**
 * _strchr - función que localice un carácter en una cade
 * @s: cadena
 * @c: var
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
