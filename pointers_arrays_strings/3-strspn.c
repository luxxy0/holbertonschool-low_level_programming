#include "main.h"
/**
 * _strspn - función que obtenga la longitud de una subcadena de prefij
 * @s: inicio
 * @accept: PJ
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
	for (p = accept; *p != '\0'; p++)
		{
	if (*s == *p)
			{
	break;
			}
	}
	if (*p == '\0')
	{
	break;
	}

	count++;
	s++;
	}

	return (count);
}

