#include "main.h"
/**
 * rev_string -  invierte una cadena
 * @s: de puntero a una cadena
 * Return: 0
 */
void rev_string(char *s)
{
	char *end = s;
	char *start = s;
	char temp;

	while (*end != '\0')
		end++;
	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

}
