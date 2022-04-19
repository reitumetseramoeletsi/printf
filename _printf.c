#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - Produces output according to a format
 * @format: a charecter string
 *
 * Return: number of printed charecters
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char *sval;
	char cval;
	int count;
	int i;

	count = 0;
	i = 0;

	if (format == NULL)
	       return (-1);	

	va_start(ap, format);
	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) != '%')
		{
			_putchar(*(format + i));
			count++;
			continue;
		}

		switch (*(format + i + 1))
		{
		case 'c':
			format++;
			cval = va_arg(ap, int);
			_putchar(cval);
			count++;
			break;

		case 's':
			format++;
			for (sval = va_arg(ap, char *); *sval; sval++)
			{
				_putchar(*(sval));
				count++;
			}
			break;
		}
	}
	va_end(ap);
	return (count);
}
