#include "main.h"
/**
 * _atoi - convierte una cadena en un número enteo
 * @s: cadena
 * Return: 0
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int num = 0;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}

		if (s[i] == '-')
		{
			sign = -sign;
		}

		i++;
	}

	return (num * sign);
}

