#include "main.h"
/**
 * print_rev - imprime una cadena al reves
 * @s: de puntero a casdena
 * Return: 0
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;

	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}

	_putchar('\n');

}
