#include "main.h"

/**
 * print_s - Print a string.
 *
 * This function is designed to print a string, and it accepts a variable
 * number of arguments using the va_list mechanism.
 *
 * @lit: Argument containing the string to be printed.
 *
 * Return: The length of the string.
 */

int print_s(va_list lit)
{
	char *s;
	int len, i;

	s = va_arg(lit, char *);

	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}

	else
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
