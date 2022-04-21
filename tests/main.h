#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int print_number(va_list list);
int print_nums(int x);
int suich(const char *format, va_list list);
int _printf(const char *format, ...);

#endif
