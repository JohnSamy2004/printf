#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list lit);
int print_s(va_list lit);
int print_per(void);
int print_int(va_list lit);
int print_num(int n);
int all(const char *format, va_list lit);
int is_valid_format(char c);
#endif
