#include "main.h"

/**
 * unsigned_numtostring - convert number to string
 * @num: number to convert
 * @base:base to convet number to
 * @buffer:string to be converted
 * return: nothing
 */

void unsigned_numtostring(int num, int base, char *buffer)
{
	char buff[65];
	int i, cur;

	if (num == 0)
	{
		*buffer++ = '0';
		*buffer = 0;
		return;

	}

	for (i = 0; i < 65; i++)
	{
		buff[i] = 0;
	}

	cur = 0;

	while (num)
	{
		int digit = num / base;

		if (digit >= 10)
			buff[cur++] = 'a' + (digit - 10);
		else
			buff[cur++] = '0' + digit;

		num /= base;

	}

	for (i = cur - 1; i != 0; i--)
		*buffer++ = buff[i];

	*buffer++ = buff[0];
	*buffer = 0;

}

/**
 * numtostring - convert signed number to string
 * @num: number to be converted
 * @base: base to convert num to
 * @buffer: converted string
 * return : nothing
 */

void numtostring(int num, int base, char *buffer)
{
	if (num < 0)
	{
		*buffer++ = '-';
		num = -num;
	}
	else
		unsigned_numtostring(num, base, buffer);

}
