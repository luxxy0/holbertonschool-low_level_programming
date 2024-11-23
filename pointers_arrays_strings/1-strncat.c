#include "main.h"
/**
 * *_strncat - La función agrega la cadena src a la cadena de destin n
 * @dest: final
 * @src: inicio
 * @n: bytes de src
 * Return: puntero al destino de cadena resultante
 */
char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (i);
}
