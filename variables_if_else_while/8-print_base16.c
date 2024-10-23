#include <stdio.h>
/**
 * main - number of base 16
 * Return: 0
 */

int main(void)
{
	int x = 0, y = 'A';

	while (x <= 9)
	{
		putchar(x + 48);
		x++;
	}
	while (y <= 'F')
	{
		putchar(y + 32);
		y++;
	}
	putchar('\n');
	return (0);
}
