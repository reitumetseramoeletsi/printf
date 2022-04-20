#include "main.h"
#include <limits.h>
/**
  * suich_2 - switch for conversion specifiers
  * @format: string to print
  * @list: arguments to print
  * Return: count of printed chars
  */
int suich_2(const char *format, va_list list)
{
	int charCount = 0, num, argLen = 0, charSize = sizeof(char);
	char *s;
	char buf[65];

	switch (*format)
	{
		case 'b':
			num = va_arg(list, int);
			s = fromDeci(buf, 2, num);
			for (argLen = 0; *s != '\0'; argLen++, s++, charCount++)
				write(1, s, charSize);
			break;
		case 'o':
			num = va_arg(list, int);
			s = fromDeci(buf, 8, num);
			for (argLen = 0; *s != '\0'; argLen++, s++, charCount++)
				write(1, s, charSize);
			break;
		case 'X':
			num = va_arg(list, int);
			s = fromDeci(buf, 16, num);
			for (argLen = 0; *s != '\0'; argLen++, s++, charCount++)
				write(1, s, charSize);
			break;
		case 'x':
			num = va_arg(list, int);
			s = fromDeci(buf, 16, num);
			for (argLen = 0; *s != '\0'; argLen++, s++, charCount++)
				write(1, s, charSize);
			break;
		case 'u':
			charCount = print_unumber(list);
			break;
		default:
			write(1, format, charSize);
			charCount++;
			break;
	}
	return (charCount);
}
