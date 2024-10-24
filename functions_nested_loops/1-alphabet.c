#include "main.h"
/**
 * print_alphabet - Prints alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}

	_putchar('\n');
}
