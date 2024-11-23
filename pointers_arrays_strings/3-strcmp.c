#include "main.h"
/**
 * _strcmp - compara 2 cadenas
 * @s1: cadena 1
 * @s2: cadena 2
 * Return: one string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
