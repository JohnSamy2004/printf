#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - this struct contain 2 members
 * @strptr: string
 * @fun: pointer to function
 */

typedef struct format
{
	char *strptr;
	int (*fun)();
} conv_match;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list lit);
int print_s(va_list lit);
int print_per(void);
int print_int(va_list arg_s);
int print_dec(va_list arg_s);
int print_num(int n);
#endif
