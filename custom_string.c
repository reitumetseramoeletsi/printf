#include <sdtio.h>
#include <stdarg.h>
#include "main.h"

/**
 * custom_string - prints string and unprintable charecters as \x
 * @list: the alocated string
 *
 * Return : Nothing
 */
void custom_string(const char *format, va_list list)
{
	int charCount = 0, i = 0; arglen = 0, charsize = sizeof(char);
	char *s, temp = '%';


	s = va_arg(list, char*);
	if (s = 'NULL')
		s = "(NULL)";
	while (s != '\0')
	{
		if ((0 < s[i] < 32) || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
		}

	}
}
