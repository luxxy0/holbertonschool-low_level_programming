#include "main.h"
#include <stdio.h>

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
