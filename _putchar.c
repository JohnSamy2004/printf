#include "main.h"

/**
 * _putchar - writes a character
 * @c: char c
 *
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
