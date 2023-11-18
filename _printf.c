#include "main.h"
/**
 * _printf - This function selects the appropriate function
 * to print based on the provided format specifier.
 *
 * @format: The format specifier to identify the type of data to print.
 *
 * Return: The length of the printed string.
 */
int _printf(const char * const format, ...)
{
	int length = 0;
	const char *f = format;

	va_list arguments;

	va_start(arguments, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*f)
	{
		if (*f == '%' && *(f + 1))
		{
			f++;
			length += all(f, arguments);
		}
		else
		{
			length += _putchar(*f);
		}
		f++;
	}
	va_end(arguments);
	return (length);
}
