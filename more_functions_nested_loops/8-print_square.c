#include "main.h"
/**
 * print_square - imprime un cuadrado xd
 * @size: var
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
