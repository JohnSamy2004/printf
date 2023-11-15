#include "main.h"

/**
 * print_s - Print a string.
 *
 * This function is designed to print a string, and it accepts a variable
 * number of arguments using the va_list mechanism.
 *
 * @lit: Argument containing the string to be printed.
 * @len: length
 *
 * Return: The length of the string.
 */

int print_s(va_list lit, int len)
{
	char *s;

	s = va_arg(lit, char *);

	for(; *s;)
	{
		len = _putchar(*s++);
	}

	return (len);
}
