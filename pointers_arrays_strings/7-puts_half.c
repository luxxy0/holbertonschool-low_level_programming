#include "main.h"
/**
 * puts_half - imprime la mitad de una cadena
 * @str: cadena
 * Return: 0
 */
void puts_half(char *str)
{
	int x = 0, mitad, c;

	while (str[x] != '\0')
		x++;

	if (x % 2 == 0)
	{
		mitad = x / 2;
	}
	else
	{
		mitad = ((x - 1) / 2 + 1);
	}
	for (c = mitad; c < x; c++)
		_putchar(str[c]);

	_putchar('\n');
}
