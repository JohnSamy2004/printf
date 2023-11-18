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
	int len = 0, i;

	s = va_arg(lit, char *);

	if (s == NULL)
	{
		s = "(null)";
		len = 6;
		for (i = 0; i < 6; i++)
			_putchar(s[i]);
		return (len);
	}

	else
	{
		while (*s)
		{
			len += _putchar(*s++);
		}

		return (len);
	}
}
