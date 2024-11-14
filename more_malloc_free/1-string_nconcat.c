#include "main.h"
/**
 * str_length - Calcula la longitud de una cadena
 * @str: La cadena de la cual se calcula la longitud
 * Return: La longitud de la cadena
 */
unsigned int str_length(char *str)
{
	unsigned int len = 0;

	if (str != NULL)
	{
		while (str[len] != '\0')
		{
			len++;
		}
	}
	return (len);
}
/**
 * string_nconcat - Concatena dos cadenas en una nueva memoria
 * @s1: Primera cadena
 * @s2: Segunda cadena
 * @n: Número de bytes de s2 a concatena
 * Return: Un puntero a la nueva cadena concatenada
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, total_len, len_s1, len_s2;
	char *p;

	if (s1 != NULL)
		len_s1 = strlen(s1);
	if (s2 != NULL)
		len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	total_len = len_s1 + n + 1;

	p = (char *)malloc(total_len * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < len_s1; i++)
	{
		p[i] = s1[i];
	}

	for (x = 0; x < n; x++)
	{
		p[i + x] = s2[x];
	}

	p[i + x] = '\0';

	return (p);
}

