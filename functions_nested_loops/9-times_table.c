#include "main.h"
/**
 * times_table - ESTA VERGA ME VA LLEVANDO 2 DIAS LPM
 */
void times_table(void)
{
	int f, c, r;

	for (f = 0; f <= 9; f++)
    {
        for (c = 0; c <= 9; c++)
        {
            r = f * c;

            if (r < 10)
            {
                if (c > 0)
                {
                    _putchar(' ');
		    _putchar(' ');
                }
                _putchar(r + '0');
            }
            else
            {
                _putchar((r / 10) + '0');
                _putchar((r % 10) + '0');
            }

            if (c < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}
