#include "main.h"
/**
 * print_diagonal - misma monda que el 6
 * @n: dibuja
 * Return: 0
 */

void print_diagonal(int n)
{
	int L, D;

	if (n > 0)
	{
		for (L = 0; L < 0; L++)
		{
			for (D = 0; D < L; D++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
