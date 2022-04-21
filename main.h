#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int print_number(va_list list);
int print_unumber(va_list list);
int print_nums(int x);
int print_unums(unsigned int x);
int suich(const char *format, va_list list);
int _printf(const char *format, ...);
int checkspec(const char *format, va_list list);
char reVal(unsigned int num);
char ReVal(unsigned int num);
void strev(char *str);
char *fromDeci(char res[], unsigned int base, unsigned int num);
int suich_2(const char *format, va_list list);
void custom_string(const char *format, va_list list);

#endif
