#include "main.h"

/**
 * print_c - Prints a character using _putchar.
 * @lit: The arguments list containing the character to be printed.
 *
 * Return: On success, returns 1.
 */

int print_c(va_list lit)
{
	char c;

	c = va_arg(lit, int);
	_putchar(c);
	return (1);
}
