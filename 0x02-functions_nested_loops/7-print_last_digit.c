/* 7-print_last_digit.c */
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
    int last_digit = _abs(n) % 10;
    _putchar('0' + last_digit);
    return (last_digit);
}

