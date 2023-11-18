#include "main.h"

/**
 * print_int - prints integer as printf exactly
 *
 * @lit: that is an argument or input number
 *
 * Return: value of integer
 */

int print_int(va_list lit)
{
	int num = va_arg(lit, int);
	int temp = 1;
	int len = 0;

	if (num < 0) {
	len += _putchar('-');
	num = -num;
	}

	while (num / temp >= 10) {
		temp *= 10;
	}

	while (temp) {
	len += _putchar((num / temp) + '0');
	num %= temp;
	temp /= 10;
	}
	return (len);
}
