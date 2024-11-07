#include "main.h"
/**
 * _strncpy - devuelve longitud de una cadena
 * @dest: final
 * @src: inicio
 * @n: bytes
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *x = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (x);
}
