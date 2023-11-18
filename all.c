#include "main.h"

/**
 * all - that function contains all functions
 *
 * @format: const char
 * @lit: va_list
 *
 * Return: length of charcters
 */

int all(const char *format, va_list lit)
{
	int len = 0;

	switch (*format)
	{
		case 'c':
		len = print_c(lit);
		break;
		case 's':
		len = print_s(lit);
		break;
		case '%':
		len += _putchar('%');
		break;
		case 'd':
		case 'i':
		len = print_int(lit);
		break;
		default:
		len += _putchar('%') + _putchar(*format);
		break;
	}
	return (len);
}
