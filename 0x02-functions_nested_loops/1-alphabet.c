/* 1-alphabet.c */
#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}

