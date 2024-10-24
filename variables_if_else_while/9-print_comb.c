#include <stdio.h>
/**
 * main - combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{

	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
