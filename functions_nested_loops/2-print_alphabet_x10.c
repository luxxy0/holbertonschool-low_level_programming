#include "main.h"
/**
 * print_alphabet_x10 - imprime el abc 10 veces
 */
void print_alphabet(void)
{
	char x, az;

	for (x = 0; x < 10; x++)
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
	_putchar('\n');
}
