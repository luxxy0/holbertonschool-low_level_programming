#include <stdio.h>
/**
 * main - number of base 16
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 0; x <= 16; x++)
	{
		if (x < 10)
			putchar(x + 0);
		else
			putchar('a' + (x - 10));
	}
	putchar('\n');
	return (0);
}
