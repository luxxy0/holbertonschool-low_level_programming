#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Imprime todos los números desde n hasta 9
 * @n: El número desde el cual comenzar la impresi�
 * Return: 0
 */
void print_to_98(int n)
{
    int x;

    if (n < 98)
    {
        for (x = n; x < 98; x++)
        {
            printf("%d", x);
            if (x < 97)
            {
                printf(", ");
            }
        }
        printf("%d\n", 98);
    }
    else if (n > 98)
    {
        for (x = n; x > 98; x--)
        {
            printf("%d", x);
            if (x > 99)
            {
                printf(", ");
            }
        }
        printf("%d\n", 98);
    }
    else
    {
        printf("%d\n", n);
    }
}

