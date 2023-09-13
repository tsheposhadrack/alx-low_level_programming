#include <unistd.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to be written
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}


