#include "main.h"
/**
 * *string_toupper - cambia las letras minúsculas de una cadena a mayúsc
 * @s: cadena
 * Return: puntero de s
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}

	return (p);

}
