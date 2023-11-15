#include "main.h"

/**
 * print_per - prints a percent (char 37)
 *
 *
 * Return: sure 1
 */

int print_per(void)
{
	return (write(1, "%%", 1));
}
