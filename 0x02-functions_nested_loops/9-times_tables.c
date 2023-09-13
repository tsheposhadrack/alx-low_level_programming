/* 9-times_table.c */
#include "main.h"

/**
 * times_table - Print the 9 times table
 */
void times_table(void)
{
    int row, column, result;

    for (row = 0; row <= 9; row++)
    {
        for (column = 0; column <= 9; column++)
        {
            result = row * column;

            if (column > 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (result < 10)
                _putchar(' ');
            else
                _putchar('0' + (result / 10));

            _putchar('0' + (result % 10));
        }
        _putchar('\n');
    }
}

