#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int print_number(va_list list);
void unsigned_numtostring(int num, int base, char *buffer);
void numtostring(int n,int base, char *buffer);
int print_nums(int x);
int suich(const char *format, va_list list);
int _printf(const char *format, ...);

#endif
