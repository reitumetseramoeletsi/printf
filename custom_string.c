#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * custom_string - prints string and unprintable charecters as \x
 * @list: the alocated string
 *
 * Return: return number of elements printed
 */
int custom_string(va_list list)
{
	int count = 0, i = 0, argLen, charSize = sizeof(char);
	unsigned int ascii;
	char *s, *buf, *hex;

	buf = malloc(64 * sizeof(char));
	hex = malloc(64 * sizeof(char));
	s = va_arg(list, char*);
	if (s == NULL)
		s = "(NULL)";
	while (*s != '\0')
	{
	if ((*s > 0 && *s < 32) || *s >= 127)
	{
		_putchar('\\');
		_putchar('x');
		ascii = (int)*s;
		hex = fromDeci(buf, 16, ascii);
		while (hex[i] != '\0')
		{
			i++;
		}
		for (argLen = 0; *hex != '\0'; argLen++, hex++, count++)
		{
			if (i < 3)
			{
				_putchar('0');
			}
			if (*hex > 91)
				*hex = *hex - 32;
			write(1, hex, charSize);
		}
		count++;
		s++;
	}
	else
	{
		_putchar(*s);
		s++;
		count++;
	}
	}
	return (count);
}
