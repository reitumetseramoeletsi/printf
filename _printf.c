#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * _printf - print efe
  * @format: string to print
  * Return: int
  */
int _printf(const char *format, ...)
{
	int charCount = 0;
	char temp = '%';
	va_list list;
	/*unsigned int charSize = sizeof(char);*/

	if (format == NULL || *format == '\0' ||
			(*format == temp && *(format + 1) == '\0'))
		return (-1);
	va_start(list, format);
	while (*format && format)
	{
		if (*format != temp)
		{
			_putchar(*format);
			charCount++;
		}
		else
		{
			if (*(format + 1) == 'c'
			|| *(format + 1) == 's' || *(format + 1) == '%'
			|| *(format + 1) == 'd' || *(format + 1) == 'i')
			{
				format++;
				charCount += suich(format, list);
			}
			else
			{
				_putchar(*format);
				charCount++;
			}
		}
		format++;
	}
	va_end(list);
	return (charCount);
}
/**
  * suich - switch for conversion specifiers
  * @format: string to print
  * @list: arguments to print
  * Return: count of printed chars
  */
int suich(const char *format, va_list list)
{
	int charCount = 0, c, argLen = 0;
	/*charSize = sizeof(char);*/
	char *s, temp = '%';

	switch (*format)
	{
		case '%':
			_putchar(temp);
			charCount++;
			break;
		case 'c':
			c = va_arg(list, int);
			_putchar(c);
			charCount++;
			break;
		case 's':
			s = va_arg(list, char*);
			if (s == NULL)
				s = "(null)";
			for (argLen = 0; *s != 0; argLen++, s++, charCount++)
				_putchar(*s);
			break;
		case 'd':
			charCount = print_number(list);
			break;
		case 'i':
			charCount = print_number(list);
			break;
		default:
			_putchar(*format);
			charCount++;
			break;
	}
	return (charCount);
}
