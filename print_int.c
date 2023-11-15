#include "main.h"

/**
 * print_num - Helper function to print an integer.
 * @n: The number to be printed.
 * Return: Number of characters printed.
 */

int print_num(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		i++;
		n = -n;
	}

	if (n / 10 != 0)
	{
		i += print_num(n / 10);
	}

	_putchar((n % 10) + '0');
	return (i);
}

/**
 * print_int - prints integer as printf exactly
 *
 * @arg_s: that is an argument or input number
 *
 * Return: value of integer
 */
int print_int(va_list arg_s)
{
	int n = va_arg(arg_s, int);

	return (print_num(n));
}

/**
 * print_dec - prints integer as printf exactly
 *
 * @arg_s: that is an argument or input number
 *
 * Return: value of integer
 */
int print_dec(va_list arg_s)
{
	int n = va_arg(arg_s, int);

	return (print_num(n));
}
