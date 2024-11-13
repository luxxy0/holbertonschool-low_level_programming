#include "main.h"
/**
 * _strdup - devuelve un puntero a un espacio recién asignado en la memori
 * @str: de puntero a cadena
 * Return: cadena
 */
char *_strdup(char *str)
{
	int i;
	int longitud = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			longitud += 1;
		}

		p = (char *)malloc((longitud + 1) * sizeof(char));

		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0; i <= longitud; i++)
			p[i] = str[i];
	}
	return (p);
}
