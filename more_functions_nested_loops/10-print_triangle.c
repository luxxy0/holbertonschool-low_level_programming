#include "main.h"
/**
 * print_triangle - imprime un triangulo
 * @size: variable
 * Return: 0
 */
void print_triangle(int size)
{
	int l, d;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (d = 1; d <= size; d++)
			{
				if (d <= size - l)
				{
					_putchar (' ');
				}
				else
				{
				_putchar('#');
				}
			}
		_putchar ('\n');
		}
	}
}
